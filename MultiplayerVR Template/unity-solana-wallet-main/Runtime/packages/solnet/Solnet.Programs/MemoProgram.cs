﻿using System.Collections.Generic;
using System.Text;
using Merkator.BitCoin;
//using NBitcoin.DataEncoders;
using Solnet.Rpc.Models;
using Solnet.Wallet;

namespace Solnet.Programs
{
    /// <summary>
    /// Helper class for the Memo Program.
    /// <remarks>
    /// Used to write UTF-8 data into Solana transactions.
    /// </remarks>
    /// </summary>
    public static class MemoProgram
    {
        /// <summary>
        /// The base58 encoder instance.
        /// </summary>
        //private static readonly Base58Encoder Encoder = new Base58Encoder();

        /// <summary>
        /// The address of the Memo Program.
        /// </summary>
        private static string ProgramId = "Memo1UhkJRfHyvLMcVucJwxXeuD728EqVDDwQDxFMNo";

        /// <summary>
        /// Initialize a new transaction instruction which interacts with the Memo Program.
        /// </summary>
        /// <param name="account">The account associated with the memo.</param>
        /// <param name="memo">The memo to be included in the transaction.</param>
        /// <returns>The <see cref="TransactionInstruction"/> which includes the memo data.</returns>
        public static TransactionInstruction NewMemo(Account account, string memo)
        {
            var keys = new List<AccountMeta>
            {
                new AccountMeta(account.PublicKey, true, false)
            };
            var memoBytes = Encoding.UTF8.GetBytes(memo);

            return new TransactionInstruction
            {
                ProgramId = Base58Encoding.Decode(ProgramId),
                Keys = keys,
                Data = memoBytes
            };
        }

    }
}