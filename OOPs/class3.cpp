#include<iostream>
using namespace std;

class Animal{
    public:
    Animal() {
        cout << "i am inside animal constructor" << endl;
    }
  virtual  void speak() {
        cout << "Speaking " << endl;
    }
};


class Dog: public Animal {
    public:
    Dog() {
        cout << " I am inside Dog Construcotr" << endl;
    }
    //override
    void speak() {
        cout << "barking" << endl;
    }
};

int main() {
    // Animal a;
    // a.speak();

    // Dog a;
    // a.speak();

    // typeCasting
    // Animal* a = new Dog();
    // a->speak();

    // // DOwnCasting
    // Dog* b = (Dog* )new Animal();
    // b->speak();

    // Animal* a= new Animal();
    
    Dog* a = new Dog();

    return 0;
}