#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void introduce() {
        cout << "My name is " << name << " and I am " << age << " years old." << endl;
    }
};

int main() {
    Person p;
    p.name = "Alice";
    p.age = 25;
    p.introduce();

    return 0;
}