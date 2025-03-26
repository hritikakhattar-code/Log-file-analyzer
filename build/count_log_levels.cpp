#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("log.txt");
    string line;
    int infoCount = 0, warningCount = 0, errorCount = 0;

    while (getline(file, line)) {
        if (line.find("[INFO]") != string::npos) infoCount++;
        else if (line.find("[WARNING]") != string::npos) warningCount++;
        else if (line.find("[ERROR]") != string::npos) errorCount++;
    }

    cout << "INFO Logs: " << infoCount << endl;
    cout << "WARNING Logs: " << warningCount << endl;
    cout << "ERROR Logs: " << errorCount << endl;

    file.close();
    return 0;
}
