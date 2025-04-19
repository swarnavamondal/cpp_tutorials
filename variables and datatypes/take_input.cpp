#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int intVar;
    float floatVar;
    double doubleVar;
    char charVar;
    string stringVar;
    bool boolVar;

    cout << "Enter an integer: ";
    cin >> intVar;

    cout << "Enter a float: ";
    cin >> floatVar;

    cout << "Enter a double: ";
    cin >> doubleVar;

    cout << "Enter a character: ";
    cin >> charVar;

    cout << "Enter a string: ";
    getline(cin, stringVar);

    cout << "Enter a boolean (0 for false, 1 for true): ";
    cin >> boolVar;
    
    cout << "\nYou entered:" << endl;
    cout << "Integer: " << intVar << endl;
    cout << "Float: " << floatVar << endl;
    cout << "Double: " << doubleVar << endl;
    cout << "Character: " << charVar << endl;
    cout << "String: " << stringVar << endl;
    cout << "Boolean: " << boolVar << endl;

    return 0;
}