#include "Blockchain.h"

Blockchain::Blockchain() {
    _vChain.emplace_back(Block(0, "Genesis Block"));
    _nDifficulty = 5;
}

void Blockchain::AddBlock(Block bNew) {
    bNew.sPrevHash = _GetLastBlock().GetHash();
    bNew.MineBlock(_nDifficulty);
    
    _vChain.push_back(bNew);
}

Block Blockchain::_GetLastBlock() const {
    return _vChain.back();
}

void Blockchain::isChainValid() {
    for (int i = 1; i < _vChain.size(); i++)
    {
        Block currentBlock = _vChain[i];
        Block previousBlock = _vChain[i-1];
        
        if (previousBlock.GetHash() != currentBlock.sPrevHash)
        {
            cout << "Block " << currentBlock.GetIndex() << " is not valid" << endl;
            break;
        }
    }

    cout << "Chain is valid." << endl;
}