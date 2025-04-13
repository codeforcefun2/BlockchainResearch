#ifndef ANALYZER_H
#define ANALYZER_H

#include <string>
#include <vector>

class Analyzer {
public:
    Analyzer();
    void loadFile(const std::string &filename);
    void parse();
    void detectVulnerabilities();
private:
    std::string sourceCode;
    std::vector<std::string> vulnerabilities;
};

#endif // ANALYZER_H
