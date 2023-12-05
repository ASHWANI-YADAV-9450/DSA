#include<iostream>
using namespace std;


class Fruit {
    public:
    string name;

};

class Mango: public Fruit {
    public:
    int weight;
};

class Allphanso: public Mango {
    public:
    int sugarLevel;
};


int main() {

    Allphanso a;

    cout << a.name << " " << a.weight << " " << a.sugarLevel << endl;

    return 0;
}