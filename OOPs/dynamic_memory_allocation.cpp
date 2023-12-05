#include<iostream>
using namespace std;

class Animal {
   // state or properties
   private:
   int weight;
   public:
   int age;
   string name;
   string type;


   // behaviour
   void eat() {
    cout << "Eating" << endl;
   }

   void sleep() {
cout << "Sleeping" << endl;  
   }

// gettter function
   int getWeight() {
    return weight;
   }

// seter function
   // void setWeight(int w) {
   //  weight = w;
   // }

    void setWeight(int weight) {
    this->weight = weight;
   }
};

int main() {
    // object Creation

    // static 
   //  Animal ramesh;
   //  ramesh.name = "Lion";
   //  ramesh.age = 12;
   //  cout << "Name   is: " << ramesh.name << endl;
   //   cout << "Age of ramesh is: " << ramesh.age << endl;
 

   //   ramesh.eat();
   //   ramesh.sleep();


   //  // to access private member

   //   ramesh.setWeight(101);
   //       cout << "Weight " << ramesh.getWeight() << endl;

    // Dynami Memory

    Animal* suresh = new Animal;

    (*suresh).age = 15;
    (*suresh).type="billi";


    // alternaitve - dynamic
    suresh-> age = 17;
    suresh->type = "Kutta";

    suresh->eat();
    suresh->sleep();

    return 0;
}


