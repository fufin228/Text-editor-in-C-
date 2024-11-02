#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    vector<string> lines; 
    string input;
    cout << "Enter text (type 'exit' to finish):" << endl;
    while (true) {
        getline(cin, input);
        if (input == "exit") {
            break;
        }
        lines.push_back(input);
    }

    ofstream outFile("output.txt", ios::app); 
    if (outFile.is_open()) { 
        for (const string& line : lines) { 
            outFile << line << endl; 
        }
        outFile.close(); 
        cout << "Text successfully saved to 'output.txt'" << endl;
    } else {
        cerr << "Error opening file for writing!" << endl; 
    }  
    return 0;
}
