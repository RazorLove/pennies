// Copyright (c) 2009-2012 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/assign/list_of.hpp> // for 'map_list_of()'
#include <boost/foreach.hpp>

#include "checkpoints.h"

#include "db.h"
#include "main.h"
#include "uint256.h"

namespace Checkpoints
{
    typedef std::map<int, uint256> MapCheckpoints;
    static MapCheckpoints mapCheckpoints =
        boost::assign::map_list_of
        (     0, hashGenesisBlockOfficial )
        (     1, uint256("0x00000629d6f31cac82862fc60c24f01d2a1332130f7a36512d19d6634f23b7ed"))
        (    10, uint256("0x00000f5f6a6b57334ec595ec513062b3d12d013ae025d23c19da2f4c29f3a793"))
        (   100, uint256("0x00000f8e3d2ac0f221b6fb96c68ff2a6789fca8be54fb2a58fc0e1d36529970a"))
        (   300, uint256("0x00000edf69cbd2e96d87bef6e400c08e268f2bfe4d1c253d010872fc9318f827"))
        (   600, uint256("0x00000b04fe74e30f2a8d952618fa8150838236737599c88a6b82989296fe53a7"))
        (   900, uint256("0x0000036a6e01fb636180bdeabe659b99545d3dd634ea1070622584484bc53157"))
        (  1000, uint256("0x00000807d7eb2c65ccfed766cbd8fcaf3b8748971a883bda5104b4dad4600225"))
        (  5000, uint256("0x0000071cdef610101490e2cd920da1da605c74191df6042b6ddde22386fdd497"))
        ( 10000, uint256("0x0000020cfb9bf5edc089990eb5f88da15958e82f33920342b14efadbaef11f67"))
        ( 20000, uint256("0x0000004c9182bd60870c78bc5a8e7f4c4641716a16cce1a6b3230a3e112a2754"))
        ( 30000, uint256("0x0000000df99ad9a3d01b76800d5e50a7429ab883e2c3f1f2d50e45f00c43335c"))
        ( 40000, uint256("0x00000002413e0321a92631b79cf7cb31045a02ea02a17c8961d17f473803b0a2"))
        ( 50000, uint256("0x00000001726c3ca0e134a210e807d058c61a059d844cd5223428e4ee2382de84"))
        ( 50600, uint256("0x000000007337b3cfe20125c76deba439d8bd41488ef948d11ef21b8cfcbac9b8"))
        ( 50650, uint256("0x000000016d0091b0d33a5b59e9c491cff3bd5aee451e352c8cdd8496d1d35367"))
        ( 50700, uint256("0x000000017da0b1f73b83409e405aa0a98f4eb37f3efc1a340927b978f766ee02"))
        ( 60000, uint256("0x000000038df060011602f03edf2687673a9c481b57ecf630fca2a49d63a54835"))
        ( 70000, uint256("0x00000000a20bddbaafb15f5c51547d5babca6bf43b5a1b5b1d8a19ce88c5faa2"))
        ( 80000, uint256("0x000000176b70a7fddd5d9fe9cde6ace6fbbaf1cd92f93fbe0a5cdfc668822530"))
        ( 90000, uint256("0x000000bcc234682a562500bab244d18c5fd90585f562192f41ef92d0f97105b4"))
        (100000, uint256("0x0000004abff9346b6b1c2a716d95ea7bec86fed7b196924c3875ada3a9105b8e"))
        (120000, uint256("0x0000004923b3b8c126346d33cf30cb6fe3d646c631ae7885e2c71560dd8b36fc"))
        (140000, uint256("0x7b866924978e8ad085003c603f42e80b5b215e391dc0d170c08306c54a74b5c7"))
        (160000, uint256("0x0000084697be26791727bfa0ef74022a64f1fb0ab48632507a26b2ccb0f3c1f9"))
        (180000, uint256("0xb39811b9af3241fd48aa5a8e46fd7e9b9d05bb5dccb62c3b52e235f0aca1bc73"))
        (200000, uint256("0x12a5fcf254d8608ca082bcaa2a3a729b8f5711d0b1467fbfcc56e9e547fca543"))
        (210000, uint256("0xc8fbf120afaa1e8012b02db228c3a35203e78bde16bdd9c402ac34479932131f"))
        (220000, uint256("0xd53c8b31605e980fb8c0d9dc1d0b8dc2719dd18144602750714cfe0c8ff66c3c"))
        (230000, uint256("0x4c0a72b6768c04e16a9264bb55eff5a2f0d5529650099917f0221ce0d48173ab"))
        (240000, uint256("0x92174bba90d1ad4ba6b2587b208afecbe38b1108cae6da422efafa1fd737c821"))
        (241000, uint256("0x16c9ae654c3a3dd4ac2e815b62f0df3842d0d0bef822324fbcf5b71cbc6010fb"))
        (242000, uint256("0x6d179b407746bd7d1410d53be0fb87c2c03ac8ce891eaccf7b0f3c6d00c0e905"))
        (242100, uint256("0xc432a72ba6176d18a9664b60c6c8b0c413b87ddcec4a7865b05ac8bfb3ced8cb"))
        (242200, uint256("0x96172a7e0df8115832bfff249dc98a14f14930e8dbe0c9ddc8ed2afc9ccbb0e4"))
        (242300, uint256("0x4df85997ef54b0df7b8dbd9d4c4d8855e858af3af370c5301762d84d8d6aa6c1"))
        (242400, uint256("0xdc262ed4b5d3632f8fd1f204a5ab5bb765959bd0164e134ad332ae2652f84eb0"))
        (242500, uint256("0x1ae61928534deeb62b775dde5fe8f26e2c0c158e2d5e4844ab39d7a7c7647862"))
        (242600, uint256("0x32f0f1b856a2ab6e6ce980f4d3dee3d97e807dda29f159d3fc71f58b137414ed"))
        (242700, uint256("0x9afc2bd1c5fa3f2a3a0e29d94d162f9e8aa984d57c7e5554e4f138cbc0d73acb"))
        (242800, uint256("0xb29ad877e994c5aa7bfe4009af52b7f97a10721d0f75da38d340fcdb1518d348"))
        (242900, uint256("0x8fd7d45e55965b317ec54ac6401ccfcff9256ecd060b242f9930a63c7afcfb4a"))
        (243000, uint256("0xaa486abe425ded9d0ed7dc6e0423fc55f60c0956e15393be63f8a8d823623d2d"))
        (244000, uint256("0x109d03582ec8f055a395e5e3f2341fc917491d06238f6cd6460b9a1d1fe0a2b0"))
        (245000, uint256("0x3831e13c95404e27f54672c2b8516a2192ac421ee70797ac27153eab9b87d62f"))
        (246000, uint256("0x0f22190425752f5960b7e8b47f0398bd1a66d99b22092931a2435fea43ce291e"))
        (247000, uint256("0x5d8fcc0f72a51dbb0cc97e80b7b2a7bc9a6ee5b182db8227a766f4c9c1f552bf"))
        (248000, uint256("0x04f5fa963a1f8cda46c1cf576d1bd84637d3f16081bfcbd7c3b393482af58279"))
        (249000, uint256("0x6e00748f972d80a0e944ec6c8dea9273d60b177a85976e14b4c27f1f00fe0f5b"))
        (250000, uint256("0x48e2813897c16a2e263008cbdb2c2086bf03ce5e52ef8a34f762d33aa4a36164"))
        (251000, uint256("0xbb4f997c0e44567370abc6c883f974c4410a2933349dfc1a2aea8c24164393cf"))
        (252000, uint256("0x7e5572ff83cc1f250b330155f7761941927b6bab94079fb513d9f877be71b830"))
        (253000, uint256("0xce67a93249432f9b8b391c2259ed35a2c67d46cc60552775f7c1d9de7d239eeb"))
        (254000, uint256("0x597d12cadb379abfabb101c46454a5cfaf2d70d7eccad27d2c18a3a6fdb91dce"))
        (255000, uint256("0xa717ff45982665175599632492a767a66b4cd7d6d54593f9ed68fc8c547d9a7b"))
        (256000, uint256("0x5e931186fd3959d87a4a0ac283def10452fd4f66e542e910872eed4ad858e88b"))
        (257000, uint256("0xd3122346b5afc74f2c7e267041ebb20ecfd3e8d38683d78ad47bebb178a7e71e"))
        (258000, uint256("0xacb9b002a46db0bbb62502e839bdded86dff4adbb591000e6a10f143597dcf60"))
        (259000, uint256("0x469b7266b60aac74a9ac57b6d92b223e711f260247c59525eaff3447f4aab98e"))
        (260000, uint256("0x1777996fe7dcbfac3c3aa66ebdb8720ccf18c9fe2e5f73521b1e58b76016c777"))
        (261000, uint256("0xbd3dd2dde4294c75e490ac8f6ec01e4eaba936a7371daf66738a89752da0290c"))
        ;

    static MapCheckpoints mapCheckpointsTestnet =
        boost::assign::map_list_of
        ( 0, hashGenesisBlockOfficial )
        ;

    bool CheckHardened(int nHeight, const uint256& hash)
    {
        MapCheckpoints& checkpoints = (fTestNet ? mapCheckpointsTestnet : mapCheckpoints);

        MapCheckpoints::const_iterator i = checkpoints.find(nHeight);
        if (i == checkpoints.end()) return true;
        return hash == i->second;
    }

    int GetTotalBlocksEstimate()
    {
        MapCheckpoints& checkpoints = (fTestNet ? mapCheckpointsTestnet : mapCheckpoints);

        return checkpoints.rbegin()->first;
    }

    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex)
    {
        MapCheckpoints& checkpoints = (fTestNet ? mapCheckpointsTestnet : mapCheckpoints);

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, checkpoints)
        {
            const uint256& hash = i.second;
            std::map<uint256, CBlockIndex*>::const_iterator t = mapBlockIndex.find(hash);
            if (t != mapBlockIndex.end())
                return t->second;
        }
        return NULL;
    }

    // ppcoin: synchronized checkpoint (centrally broadcasted)
    uint256 hashSyncCheckpoint = 0;
    uint256 hashPendingCheckpoint = 0;
    CSyncCheckpoint checkpointMessage;
    CSyncCheckpoint checkpointMessagePending;
    uint256 hashInvalidCheckpoint = 0;
    CCriticalSection cs_hashSyncCheckpoint;

    // ppcoin: get last synchronized checkpoint
    CBlockIndex* GetLastSyncCheckpoint()
    {
        LOCK(cs_hashSyncCheckpoint);
        if (!mapBlockIndex.count(hashSyncCheckpoint))
            error("GetSyncCheckpoint: block index missing for current sync-checkpoint %s", hashSyncCheckpoint.ToString().c_str());
        else
            return mapBlockIndex[hashSyncCheckpoint];
        return NULL;
    }

    // ppcoin: only descendant of current sync-checkpoint is allowed
    bool ValidateSyncCheckpoint(uint256 hashCheckpoint)
    {
        if (!mapBlockIndex.count(hashSyncCheckpoint))
            return error("ValidateSyncCheckpoint: block index missing for current sync-checkpoint %s", hashSyncCheckpoint.ToString().c_str());
        if (!mapBlockIndex.count(hashCheckpoint))
            return error("ValidateSyncCheckpoint: block index missing for received sync-checkpoint %s", hashCheckpoint.ToString().c_str());

        CBlockIndex* pindexSyncCheckpoint = mapBlockIndex[hashSyncCheckpoint];
        CBlockIndex* pindexCheckpointRecv = mapBlockIndex[hashCheckpoint];

        if (pindexCheckpointRecv->nHeight <= pindexSyncCheckpoint->nHeight)
        {
            // Received an older checkpoint, trace back from current checkpoint
            // to the same height of the received checkpoint to verify
            // that current checkpoint should be a descendant block
            CBlockIndex* pindex = pindexSyncCheckpoint;
            while (pindex->nHeight > pindexCheckpointRecv->nHeight)
                if (!(pindex = pindex->pprev))
                    return error("ValidateSyncCheckpoint: pprev1 null - block index structure failure");
            if (pindex->GetBlockHash() != hashCheckpoint)
            {
                hashInvalidCheckpoint = hashCheckpoint;
                return error("ValidateSyncCheckpoint: new sync-checkpoint %s is conflicting with current sync-checkpoint %s", hashCheckpoint.ToString().c_str(), hashSyncCheckpoint.ToString().c_str());
            }
            return false; // ignore older checkpoint
        }

        // Received checkpoint should be a descendant block of the current
        // checkpoint. Trace back to the same height of current checkpoint
        // to verify.
        CBlockIndex* pindex = pindexCheckpointRecv;
        while (pindex->nHeight > pindexSyncCheckpoint->nHeight)
            if (!(pindex = pindex->pprev))
                return error("ValidateSyncCheckpoint: pprev2 null - block index structure failure");
        if (pindex->GetBlockHash() != hashSyncCheckpoint)
        {
            hashInvalidCheckpoint = hashCheckpoint;
            return error("ValidateSyncCheckpoint: new sync-checkpoint %s is not a descendant of current sync-checkpoint %s", hashCheckpoint.ToString().c_str(), hashSyncCheckpoint.ToString().c_str());
        }
        return true;
    }

    bool WriteSyncCheckpoint(const uint256& hashCheckpoint)
    {
        CTxDB txdb;
        txdb.TxnBegin();
        if (!txdb.WriteSyncCheckpoint(hashCheckpoint))
        {
            txdb.TxnAbort();
            return error("WriteSyncCheckpoint(): failed to write to db sync checkpoint %s", hashCheckpoint.ToString().c_str());
        }
        if (!txdb.TxnCommit())
            return error("WriteSyncCheckpoint(): failed to commit to db sync checkpoint %s", hashCheckpoint.ToString().c_str());
        txdb.Close();

        Checkpoints::hashSyncCheckpoint = hashCheckpoint;
        return true;
    }

    bool AcceptPendingSyncCheckpoint()
    {
        LOCK(cs_hashSyncCheckpoint);
        if (hashPendingCheckpoint != 0 && mapBlockIndex.count(hashPendingCheckpoint))
        {
            if (!ValidateSyncCheckpoint(hashPendingCheckpoint))
            {
                hashPendingCheckpoint = 0;
                checkpointMessagePending.SetNull();
                return false;
            }

            CTxDB txdb;
            CBlockIndex* pindexCheckpoint = mapBlockIndex[hashPendingCheckpoint];
            if (!pindexCheckpoint->IsInMainChain())
            {
                CBlock block;
                if (!block.ReadFromDisk(pindexCheckpoint))
                    return error("AcceptPendingSyncCheckpoint: ReadFromDisk failed for sync checkpoint %s", hashPendingCheckpoint.ToString().c_str());
                if (!block.SetBestChain(txdb, pindexCheckpoint))
                {
                    hashInvalidCheckpoint = hashPendingCheckpoint;
                    return error("AcceptPendingSyncCheckpoint: SetBestChain failed for sync checkpoint %s", hashPendingCheckpoint.ToString().c_str());
                }
            }
            txdb.Close();

            if (!WriteSyncCheckpoint(hashPendingCheckpoint))
                return error("AcceptPendingSyncCheckpoint(): failed to write sync checkpoint %s", hashPendingCheckpoint.ToString().c_str());
            hashPendingCheckpoint = 0;
            checkpointMessage = checkpointMessagePending;
            checkpointMessagePending.SetNull();
            printf("AcceptPendingSyncCheckpoint : sync-checkpoint at %s\n", hashSyncCheckpoint.ToString().c_str());
            // relay the checkpoint
            if (!checkpointMessage.IsNull())
            {
                BOOST_FOREACH(CNode* pnode, vNodes)
                    checkpointMessage.RelayTo(pnode);
            }
            return true;
        }
        return false;
    }

    // Automatically select a suitable sync-checkpoint 
    uint256 AutoSelectSyncCheckpoint()
    {
        // Proof-of-work blocks are immediately checkpointed
        // to defend against 51% attack which rejects other miners block 

        // Select the last proof-of-work block
        const CBlockIndex *pindex = GetLastBlockIndex(pindexBest, false);
        // Search forward for a block within max span and maturity window
        while (pindex->pnext && (pindex->GetBlockTime() + CHECKPOINT_MAX_SPAN <= pindexBest->GetBlockTime() || pindex->nHeight + std::min(6, nCoinbaseMaturity - 20) <= pindexBest->nHeight))
            pindex = pindex->pnext;
        return pindex->GetBlockHash();
    }

    // Check against synchronized checkpoint
    bool CheckSync(const uint256& hashBlock, const CBlockIndex* pindexPrev)
    {
        if (fTestNet) return true; // Testnet has no checkpoints
        int nHeight = pindexPrev->nHeight + 1;

        LOCK(cs_hashSyncCheckpoint);
        // sync-checkpoint should always be accepted block
        assert(mapBlockIndex.count(hashSyncCheckpoint));
        const CBlockIndex* pindexSync = mapBlockIndex[hashSyncCheckpoint];

        if (nHeight > pindexSync->nHeight)
        {
            // trace back to same height as sync-checkpoint
            const CBlockIndex* pindex = pindexPrev;
            while (pindex->nHeight > pindexSync->nHeight)
                if (!(pindex = pindex->pprev))
                    return error("CheckSync: pprev null - block index structure failure");
            if (pindex->nHeight < pindexSync->nHeight || pindex->GetBlockHash() != hashSyncCheckpoint)
                return false; // only descendant of sync-checkpoint can pass check
        }
        if (nHeight == pindexSync->nHeight && hashBlock != hashSyncCheckpoint)
            return false; // same height with sync-checkpoint
        if (nHeight < pindexSync->nHeight && !mapBlockIndex.count(hashBlock))
            return false; // lower height than sync-checkpoint
        return true;
    }

    bool WantedByPendingSyncCheckpoint(uint256 hashBlock)
    {
        LOCK(cs_hashSyncCheckpoint);
        if (hashPendingCheckpoint == 0)
            return false;
        if (hashBlock == hashPendingCheckpoint)
            return true;
        if (mapOrphanBlocks.count(hashPendingCheckpoint) 
            && hashBlock == WantedByOrphan(mapOrphanBlocks[hashPendingCheckpoint]))
            return true;
        return false;
    }

    // ppcoin: reset synchronized checkpoint to last hardened checkpoint
    bool ResetSyncCheckpoint()
    {
        LOCK(cs_hashSyncCheckpoint);
        const uint256& hash = mapCheckpoints.rbegin()->second;
        if (mapBlockIndex.count(hash) && !mapBlockIndex[hash]->IsInMainChain())
        {
            // checkpoint block accepted but not yet in main chain
            printf("ResetSyncCheckpoint: SetBestChain to hardened checkpoint %s\n", hash.ToString().c_str());
            CTxDB txdb;
            CBlock block;
            if (!block.ReadFromDisk(mapBlockIndex[hash]))
                return error("ResetSyncCheckpoint: ReadFromDisk failed for hardened checkpoint %s", hash.ToString().c_str());
            if (!block.SetBestChain(txdb, mapBlockIndex[hash]))
            {
                return error("ResetSyncCheckpoint: SetBestChain failed for hardened checkpoint %s", hash.ToString().c_str());
            }
            txdb.Close();
        }
        else if(!mapBlockIndex.count(hash))
        {
            // checkpoint block not yet accepted
            hashPendingCheckpoint = hash;
            checkpointMessagePending.SetNull();
            printf("ResetSyncCheckpoint: pending for sync-checkpoint %s\n", hashPendingCheckpoint.ToString().c_str());
        }

        BOOST_REVERSE_FOREACH(const MapCheckpoints::value_type& i, mapCheckpoints)
        {
            const uint256& hash = i.second;
            if (mapBlockIndex.count(hash) && mapBlockIndex[hash]->IsInMainChain())
            {
                if (!WriteSyncCheckpoint(hash))
                    return error("ResetSyncCheckpoint: failed to write sync checkpoint %s", hash.ToString().c_str());
                printf("ResetSyncCheckpoint: sync-checkpoint reset to %s\n", hashSyncCheckpoint.ToString().c_str());
                return true;
            }
        }

        return false;
    }

    void AskForPendingSyncCheckpoint(CNode* pfrom)
    {
        LOCK(cs_hashSyncCheckpoint);
        if (pfrom && hashPendingCheckpoint != 0 && (!mapBlockIndex.count(hashPendingCheckpoint)) && (!mapOrphanBlocks.count(hashPendingCheckpoint)))
            pfrom->AskFor(CInv(MSG_BLOCK, hashPendingCheckpoint));
    }

    bool SetCheckpointPrivKey(std::string strPrivKey)
    {
        // Test signing a sync-checkpoint with genesis block
        CSyncCheckpoint checkpoint;
        checkpoint.hashCheckpoint = hashGenesisBlock;
        CDataStream sMsg(SER_NETWORK, PROTOCOL_VERSION);
        sMsg << (CUnsignedSyncCheckpoint)checkpoint;
        checkpoint.vchMsg = std::vector<unsigned char>(sMsg.begin(), sMsg.end());

        std::vector<unsigned char> vchPrivKey = ParseHex(strPrivKey);
        CKey key;
        key.SetPrivKey(CPrivKey(vchPrivKey.begin(), vchPrivKey.end())); // if key is not correct openssl may crash
        if (!key.Sign(Hash(checkpoint.vchMsg.begin(), checkpoint.vchMsg.end()), checkpoint.vchSig))
            return false;

        // Test signing successful, proceed
        CSyncCheckpoint::strMasterPrivKey = strPrivKey;
        return true;
    }

    bool SendSyncCheckpoint(uint256 hashCheckpoint)
    {
        CSyncCheckpoint checkpoint;
        checkpoint.hashCheckpoint = hashCheckpoint;
        CDataStream sMsg(SER_NETWORK, PROTOCOL_VERSION);
        sMsg << (CUnsignedSyncCheckpoint)checkpoint;
        checkpoint.vchMsg = std::vector<unsigned char>(sMsg.begin(), sMsg.end());

        if (CSyncCheckpoint::strMasterPrivKey.empty())
            return error("SendSyncCheckpoint: Checkpoint master key unavailable.");
        std::vector<unsigned char> vchPrivKey = ParseHex(CSyncCheckpoint::strMasterPrivKey);
        CKey key;
        key.SetPrivKey(CPrivKey(vchPrivKey.begin(), vchPrivKey.end())); // if key is not correct openssl may crash
        if (!key.Sign(Hash(checkpoint.vchMsg.begin(), checkpoint.vchMsg.end()), checkpoint.vchSig))
            return error("SendSyncCheckpoint: Unable to sign checkpoint, check private key?");

        if(!checkpoint.ProcessSyncCheckpoint(NULL))
        {
            printf("WARNING: SendSyncCheckpoint: Failed to process checkpoint.\n");
            return false;
        }

        // Relay checkpoint
        {
            LOCK(cs_vNodes);
            BOOST_FOREACH(CNode* pnode, vNodes)
                checkpoint.RelayTo(pnode);
        }
        return true;
    }

    // Is the sync-checkpoint outside maturity window?
    bool IsMatureSyncCheckpoint()
    {
        LOCK(cs_hashSyncCheckpoint);
        // sync-checkpoint should always be accepted block
        assert(mapBlockIndex.count(hashSyncCheckpoint));
        const CBlockIndex* pindexSync = mapBlockIndex[hashSyncCheckpoint];
        return (nBestHeight >= pindexSync->nHeight + nCoinbaseMaturity ||
                pindexSync->GetBlockTime() + nStakeMinAge < GetAdjustedTime());
    }

    // Is the sync-checkpoint too old?
    bool IsSyncCheckpointTooOld(unsigned int nSeconds)
    {

// WM - Defeat the "checkpoint too old" check, not needed now that Pennies is launched and stable.
/*
        LOCK(cs_hashSyncCheckpoint);
        // sync-checkpoint should always be accepted block
        assert(mapBlockIndex.count(hashSyncCheckpoint));
        const CBlockIndex* pindexSync = mapBlockIndex[hashSyncCheckpoint];
        return (pindexSync->GetBlockTime() + nSeconds < GetAdjustedTime());
*/

        return false;
    }

}

// ppcoin: sync-checkpoint master key
const std::string CSyncCheckpoint::strMasterPubKey = "04bd3f419127f084f13e6d4ee35d915eb76e78f16b4c259c7ea5dbec5c4b4c0da5089060c1df266c1d167603ecedb2d5d49b26aefa165ad912dc3c664f429c6846";

std::string CSyncCheckpoint::strMasterPrivKey = "";

// ppcoin: verify signature of sync-checkpoint message
bool CSyncCheckpoint::CheckSignature()
{
    CKey key;
    if (!key.SetPubKey(ParseHex(CSyncCheckpoint::strMasterPubKey)))
        return error("CSyncCheckpoint::CheckSignature() : SetPubKey failed");
    if (!key.Verify(Hash(vchMsg.begin(), vchMsg.end()), vchSig))
        return error("CSyncCheckpoint::CheckSignature() : verify signature failed");

    // Now unserialize the data
    CDataStream sMsg(vchMsg, SER_NETWORK, PROTOCOL_VERSION);
    sMsg >> *(CUnsignedSyncCheckpoint*)this;
    return true;
}

// ppcoin: process synchronized checkpoint
bool CSyncCheckpoint::ProcessSyncCheckpoint(CNode* pfrom)
{
    if (!CheckSignature())
        return false;

    LOCK(Checkpoints::cs_hashSyncCheckpoint);
    if (!mapBlockIndex.count(hashCheckpoint))
    {
        // We haven't received the checkpoint chain, keep the checkpoint as pending
        Checkpoints::hashPendingCheckpoint = hashCheckpoint;
        Checkpoints::checkpointMessagePending = *this;
        printf("ProcessSyncCheckpoint: pending for sync-checkpoint %s\n", hashCheckpoint.ToString().c_str());
        // Ask this guy to fill in what we're missing
        if (pfrom)
        {
            pfrom->PushGetBlocks(pindexBest, hashCheckpoint);
            // ask directly as well in case rejected earlier by duplicate
            // proof-of-stake because getblocks may not get it this time
            pfrom->AskFor(CInv(MSG_BLOCK, mapOrphanBlocks.count(hashCheckpoint)? WantedByOrphan(mapOrphanBlocks[hashCheckpoint]) : hashCheckpoint));
        }
        return false;
    }

    if (!Checkpoints::ValidateSyncCheckpoint(hashCheckpoint))
        return false;

    CTxDB txdb;
    CBlockIndex* pindexCheckpoint = mapBlockIndex[hashCheckpoint];
    if (!pindexCheckpoint->IsInMainChain())
    {
        // checkpoint chain received but not yet main chain
        CBlock block;
        if (!block.ReadFromDisk(pindexCheckpoint))
            return error("ProcessSyncCheckpoint: ReadFromDisk failed for sync checkpoint %s", hashCheckpoint.ToString().c_str());
        if (!block.SetBestChain(txdb, pindexCheckpoint))
        {
            Checkpoints::hashInvalidCheckpoint = hashCheckpoint;
            return error("ProcessSyncCheckpoint: SetBestChain failed for sync checkpoint %s", hashCheckpoint.ToString().c_str());
        }
    }
    txdb.Close();

    if (!Checkpoints::WriteSyncCheckpoint(hashCheckpoint))
        return error("ProcessSyncCheckpoint(): failed to write sync checkpoint %s", hashCheckpoint.ToString().c_str());
    Checkpoints::checkpointMessage = *this;
    Checkpoints::hashPendingCheckpoint = 0;
    Checkpoints::checkpointMessagePending.SetNull();
    printf("ProcessSyncCheckpoint: sync-checkpoint at %s\n", hashCheckpoint.ToString().c_str());
    return true;
}
