#include <iostream>
#include <fstream>
#include <regex>
using namespace std;

int main() {
    ifstream file("log.txt");
    string line;
    regex errorPattern("\\[ERROR\\] (.*)");

    while (getline(file, line)) {
        smatch match;
        if (regex_search(line, match, errorPattern)) {
            cout << "Error Found: " << match[1] << endl;
        }
    }
    file.close();
    return 0;
}
