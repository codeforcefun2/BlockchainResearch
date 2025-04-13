#ifndef ROLLUP_H
#define ROLLUP_H

#include <string>
#include <vector>

class Rollup {
public:
    // type can be "Optimistic Rollup" or "ZK Rollup"
    Rollup(const std::string &type);
    void addTransaction(const std::string &tx);
    void processTransactions();
private:
    std::string rollupType;
    std::vector<std::string> transactions;
};

#endif // ROLLUP_H
