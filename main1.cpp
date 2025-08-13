#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to overwrite file content
void overwriteFile(const string& fileName) {
    ofstream fileOut(fileName); // Clears existing content
    if (!fileOut.is_open()) {
        cerr << "Unable to open file for writing.\n";
        return;
    }

    cout << "Type the content to save in the file:\n";
    cin.ignore();
    string inputText;
    getline(cin, inputText);

    fileOut << inputText << '\n';
    cout << "File updated successfully.\n";

    fileOut.close();
}

// Function to display file content
void displayFile(const string& fileName) {
    ifstream fileIn(fileName);
    if (!fileIn.is_open()) {
        cerr << "Unable to open file for reading.\n";
        return;
    }

    cout << "\n--- File Content ---\n";
    string line;
    while (getline(fileIn, line)) {
        cout << line << '\n';
    }

    fileIn.close();
}

// Function to add content at the end of file
void addToFile(const string& fileName) {
    ofstream fileOut(fileName, ios::app);
    if (!fileOut.is_open()) {
        cerr << "Unable to open file for appending.\n";
        return;
    }

    cout << "Type the content to append:\n";
    cin.ignore();
    string inputText;
    getline(cin, inputText);

    fileOut << inputText << '\n';
    cout << "Content appended successfully.\n";

    fileOut.close();
}

int main() {
    const string fileName = "managed_file.txt";
    int option;

    while (true) {
        cout << "\n=== Simple File Manager ===\n";
        cout << "1. Overwrite File\n";
        cout << "2. View File\n";
        cout << "3. Append to File\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> option;

        switch (option) {
            case 1:
                overwriteFile(fileName);
                break;
            case 2:
                displayFile(fileName);
                break;
            case 3:
                addToFile(fileName);
                break;
            case 4:
                cout << "Program terminated. See you!\n";
                return 0;
            default:
                cout << "Invalid selection. Please try again.\n";
        }
    }

    return 0;
}
