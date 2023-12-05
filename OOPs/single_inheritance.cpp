#include<iostream>
using namespace std;

class Car {
    public:
    string name;
    int weight;
    int age;


    void speedUp() {
        cout << "Speeding up " << endl;
    }

    void breakMarr() {
        cout <<" break marrdi" << endl;
    }
};


class Scorpio: public Car {

};


int main() {
// cout <<"hello";

Scorpio babbarWAli;
babbarWAli.speedUp();


return 0;
}