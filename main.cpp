#include <iostream>
#include "Blockchain.h"

int main() {
    Blockchain bChain = Blockchain();
    
    cout << "Mining block 1..." << endl;
    bChain.AddBlock(Block(1, "Minh chuyen tien cho Hien"));

    cout << "Mining block 2..." << endl;
    bChain.AddBlock(Block(2, "Hung chuyen tien cho Minh"));

    cout << "Mining block 3..." << endl;
    bChain.AddBlock(Block(3, "Hung chuyen tien cho Hien"));

    return 0;
}