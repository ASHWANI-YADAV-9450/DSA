#include<iostream>
using namespace std;

class Car {
    public:
    int age;
    int weight;
    string name;

    void speedUp() {
        cout << "Speeding Up" << endl;
    }
};

class Scorpio:public Car{

};

class Fortuner: public Car {

};

int main() {
    Scorpio s1;
    s1.speedUp(); 
    return 0;
}