#ifndef BLOCK_H
#define BLOCK_H

#include <iostream>
#include <cstdint>
using namespace std;

class Block {
public:
    string sPrevHash;

    Block(uint32_t nIndexIn, const string &sDataIn);

    string GetHash();

    void MineBlock(uint32_t uDifficulty);
    
private:
    uint32_t _nIndex;
    int64_t _nNonce;
    string _sData;
    string _sHash;
    time_t _tTime;

    string _CalculateHash() const;

};

#endif // BLOCK