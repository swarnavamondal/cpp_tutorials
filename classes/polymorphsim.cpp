#include <iostream>
#include <vector>
using namespace std;


class Animal {
public:
    virtual void speak() const {
        cout << "Some animal sound" << endl;
    }
    virtual ~Animal() {}
};


class Dog : public Animal {
public:
    void speak() const override {
        cout << "Woof!" << endl;
    }
};


class Cat : public Animal {
public:
    void speak() const override {
        cout << "Meow!" << endl;
    }
};

int main() {
    vector<Animal*> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for (const auto& animal : animals) {
        animal->speak(); 
    }


    for (auto animal : animals) {
        delete animal;
    }
    return 0;
}