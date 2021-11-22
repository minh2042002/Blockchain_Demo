#include <iostream>
#include "Blockchain.h"

int main() {
    Blockchain bChain = Blockchain();
    
    cout << "Mining block 1...\n" << endl;
    bChain.AddBlock(Block(1, "Minh chuyen tien cho Hien"));

    cout << "Mining block 2...\n" << endl;
    bChain.AddBlock(Block(2, "Hung chuyen tien cho Minh"));

    cout << "Mining block 3...\n" << endl;
    bChain.AddBlock(Block(3, "Hung chuyen tien cho Hien"));

    bChain.isChainValid();

    return 0;
}