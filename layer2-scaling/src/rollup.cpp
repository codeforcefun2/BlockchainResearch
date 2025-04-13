#include "rollup.h"
#include <iostream>

Rollup::Rollup(const std::string &type) : rollupType(type) { }

void Rollup::addTransaction(const std::string &tx) {
    transactions.push_back(tx);
    std::cout << "Added transaction " << tx << " to " << rollupType << std::endl;
}

void Rollup::processTransactions() {
    std::cout << "Processing transactions for " << rollupType << "..." << std::endl;
    // Simulate processing each transaction in the batch
    for (const auto &tx : transactions) {
        std::cout << "Processing " << tx << std::endl;
    }
    transactions.clear();
    std::cout << rollupType << " processing complete." << std::endl;
}
