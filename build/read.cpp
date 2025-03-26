#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("log.txt");
    string line;

    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
    return 0;
}
