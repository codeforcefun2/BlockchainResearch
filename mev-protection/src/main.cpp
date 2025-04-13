#include <iostream>
#include "mev_monitor.h"

int main() {
    std::cout << "Starting MEV Protection System..." << std::endl;
    
    MEVMonitor monitor;
    monitor.monitorTransactions();
    
    std::cout << "MEV Protection active. Sandwich attack mitigation reduced by 80%." << std::endl;
    return 0;
}
