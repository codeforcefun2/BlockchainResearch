#include <iostream>
#include "analyzer.h"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout << "Usage: security_analyzer <smart_contract.sol>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::cout << "Analyzing smart contract: " << filename << std::endl;
    
    Analyzer analyzer;
    analyzer.loadFile(filename);
    analyzer.parse();
    analyzer.detectVulnerabilities();
    
    return 0;
}
