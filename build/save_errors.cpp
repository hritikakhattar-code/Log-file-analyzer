#include <iostream>
#include <fstream>
#include <regex>
using namespace std;

int main() {
    ifstream file("log.txt");
    ofstream outputFile("error_logs.txt");
    string line;
    regex errorPattern("\\[ERROR\\] (.*)");

    while (getline(file, line)) {
        smatch match;
        if (regex_search(line, match, errorPattern)) {
            outputFile << match[1] << endl;
        }
    }

    cout << "Errors saved to error_logs.txt" << endl;
    file.close();
    outputFile.close();
    return 0;
}
