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

   // default Constructor
   Animal() {
    this->weight=0;
    this->age = 0;
    cout << "Constructor Called" << endl;
   }

// Parameterised Constructor
Animal(int age) {
    this->age = 0;
    this->type ="";
    cout << "Parameetrised Constructor Called" << endl;
   }


   Animal (int age, int weight) {
    this->age = age;
    cout << "Parametrised Constructor 2 called" << endl;
   }

   Animal(int age, int weight, string type) {
    this->age= age;
    this->type = type;
    this->weight = weight;
  cout << "Parametrised Constructor 3 called" << endl;
   }


   // Copy constructor
   Animal(Animal &obj) {
    this->age = obj.age;
    this->weight = obj.weight;
    this->type = obj.type;
    cout <<" I am inside copy constructor " << endl;
   }

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
   void setWeight(int w) {
    weight = w;
   }


   void print() {
    cout << this->age <<" "<< this->weight <<" " << this->type << endl;
   }
};

int main() {
    // object Creation

    // static 
    // Animal ramesh;
    // ramesh.name = "Lion";
    // ramesh.age = 12;
    // cout << "Name   is: " << ramesh.name << endl;
    //  cout << "Age of ramesh is: " << ramesh.age << endl;
 

    //  ramesh.eat();
    //  ramesh.sleep();


    // // to access private member

    //  ramesh.setWeight(101);
    //      cout << "Weight " << ramesh.getWeight() << endl;

    // Dynami Memory


// Animal a(10);
// Animal* b = new Animal(100, 102 ,"Lucky");

// object copy
// Animal c = a;

// // alternative for copy
// Animal animal1(c);


// example of copy
 Animal a;
 a.age =20;
 a.setWeight(101);
 a.type = "babbar";


 Animal b = a;
 a.print();
  b.print();

 a.type[0] ='G';
 a.print();


    return 0;
}


////////////////////////

// class Animal {
//     int age;
//     int wight;
//     char ch;
// };

// int main() {
//     cout <<" size of empty class is: " << sizeof(Animal) << endl;
// }