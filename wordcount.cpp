#include <iostream>
#include <fstream>  
using namespace std;

int main() {
    string filename;
    int wordCount = 0;
    string word;

   
    cout << "Enter Your File Name : ";
    cin >> filename;
    cout<<endl;

    
    ifstream inputFile(filename);

   
    if (!inputFile.is_open()) {
        cout << "Error opening the file. Please check the filename and try again." << endl;
        return 1;  
    }

    
    while (inputFile >> word) {
        wordCount++;
    }

    
    inputFile.close();

   
    cout << "Total number of words in the file '" << filename << "' is : " << wordCount << endl;

    return 0;  
}