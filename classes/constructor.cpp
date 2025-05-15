#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;
public:
    
    Person(const std::string& n, int a) : name(n), age(a) {}

    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    Person p1("Alice", 30);
    p1.display();

    Person p2("Bob", 25);
    p2.display();

    return 0;
}