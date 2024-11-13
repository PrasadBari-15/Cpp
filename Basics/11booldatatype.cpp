#include<iostream>
using namespace std;

int main() {
    bool isStudent;

    cout << "Are you a student? (true/false): ";
    cin >> isStudent;

    if (isStudent) {
        cout << "You are a student." << endl;
    } else {
        cout << "You are not a student." << endl;
    }

    return 0;
}