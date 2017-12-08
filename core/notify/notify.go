// Copyright (C) 2017, Beijing Bochen Technology Co.,Ltd.  All rights reserved.
//
// This file is part of L0
//
// The L0 is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// The L0 is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

package notify

import (
	"errors"
	"math/big"
	"sync"

	"github.com/bocheninc/L0/core/types"
)

var (
	callbacks sync.Map
)

// Register receive transaction hash and callback function
// When the transaction is submitted execute callback function
func Register(txHash interface{}, sender, recipient *big.Int, callback func(...interface{})) error {
	if callback == nil || txHash == nil {
		return errors.New("txHash or callback function cannot be nil")

	}
	if cb, ok := callbacks.Load(txHash); ok {
		if balance, ok := cb.(*types.Balance); ok {
			balance.Sender = sender
			balance.Recipient = recipient
			callbacks.Store(txHash, balance)
		}
	} else {
		callbacks.Store(txHash, &types.Balance{Sender: sender, Recipient: recipient, Callback: callback})
	}
	return nil
}

func BlockNotify(block *types.Block) {
	if block == nil || len(block.Transactions) == 0 {
		return
	}
	// notify transaction register, execute callback function
	go func(txs []*types.Transaction) {
		for _, tx := range block.Transactions {
			if cb, ok := callbacks.Load(tx.Hash()); ok {
				if balance, b := cb.(*types.Balance); b {
					balance.Callback(balance.Sender, balance.Recipient)
				}
				callbacks.Delete(tx)
			}
		}
	}(block.Transactions)
}

func TxNotify(tx *types.Transaction, i interface{}) {
	if cb, ok := callbacks.Load(tx.Hash()); ok {
		if balance, b := cb.(*types.Balance); b {
			balance.Callback(i)
		}
		callbacks.Delete(tx)
	}
}