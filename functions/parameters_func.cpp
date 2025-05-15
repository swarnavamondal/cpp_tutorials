#include <iostream>
using namespace std;


void greet(string name, int age) {
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
}

int main() {
    
    greet("Alice", 25);
    greet("Bob", 30);
    return 0;
}