#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;

public:
    
    void setName(const string& newName) {
        name = newName;
    }

    
    string getName() const {
        return name;
    }

    
    void setAge(int newAge) {
        if (newAge >= 0) {
            age = newAge;
        }
    }

    
    int getAge() const {
        return age;
    }
};

int main() {
    Person p;
    p.setName("Alice");
    p.setAge(30);

    cout << "Name: " << p.getName() << endl;
    cout << "Age: " << p.getAge() << endl;

    return 0;
}