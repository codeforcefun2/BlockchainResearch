#include "analyzer.h"
#include <iostream>
#include <fstream>
#include <sstream>

Analyzer::Analyzer() {}

void Analyzer::loadFile(const std::string &filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Could not open file " << filename << std::endl;
        return;
    }
    std::stringstream ss;
    ss << file.rdbuf();
    sourceCode = ss.str();
}

void Analyzer::parse() {
    // Dummy parsing: In a real analyzer, an AST would be built here.
    std::cout << "Parsing source code into AST..." << std::endl;
}

void Analyzer::detectVulnerabilities() {
    std::cout << "Detecting vulnerabilities..." << std::endl;
    // Simulate vulnerability detection by checking for keywords
    if (sourceCode.find("reentrancy") != std::string::npos) {
        vulnerabilities.push_back("Reentrancy detected");
    }
    if (sourceCode.find("overflow") != std::string::npos) {
        vulnerabilities.push_back("Integer overflow detected");
    }
    if (sourceCode.find("flashloan") != std::string::npos) {
        vulnerabilities.push_back("Flash loan attack detected");
    }
    if (vulnerabilities.empty()) {
        std::cout << "No vulnerabilities detected." << std::endl;
    } else {
        std::cout << "Vulnerabilities found:" << std::endl;
        for (const auto &v : vulnerabilities) {
            std::cout << "- " << v << std::endl;
        }
    }
}
