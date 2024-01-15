#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int marks;

    cout << "Enter Your name: ";
    cin >> name;

    cout << "Enter Your Marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << name << ", Your Grade is A+";
    } else if (marks >= 80) {
        cout << name << ", Your Grade is A";
    } else if (marks >= 70) {
        cout << name << ", Your Grade is B+";
    } else if (marks >= 60) {
        cout << name << ", Your Grade is B";
    } else if (marks >= 50) {
        cout << name << ", Your Grade is C";
    } else if (marks >= 40) {
        cout << name << ", Your Grade is D";
    } else if (marks >= 30) {
        cout << name << ", Your Grade is E";
    } else if (marks < 30 && marks >= 0) {
        cout << name << ", Your Grade is F";
    } else {
        cout << "Enter Valid Marks";
    }

    return 0;
}