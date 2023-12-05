#include<iostream>
using namespace std;

class Animal {
    public:
    int age;
    // int weight;


    // void eat() {
    //     cout << "Eating" << endl;
    // }
};


class Dog: protected Animal {
    public: void print() {
        cout << this->age;
    }
    
};


int main() {
    // cout << "helloo" << endl;

    Dog d1;
    // d1.eat();
    // cout << d1.age;
    d1.print();


    return 0;
}