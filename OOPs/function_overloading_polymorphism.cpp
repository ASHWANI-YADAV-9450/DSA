#include<iostream>
using namespace std;

class Maths{
    public:

    int sum(int a, int b) {
        cout << " I am in 1st signature " << endl;
        return a+b;
    }
    int sum(int a, int b, int c) {
          cout << " I am in 2nd signature " << endl;
        return a+b+c;
    }

    int sum(int a, float b) {
          cout << " I am in 3rd signature " << endl;
        return a+b+10;
    }
};

int main() {
    Maths obj;
    // cout << obj.sum(2,5.3f);
    //   cout << obj.sum(2,5);
      cout << obj.sum(2,5,6);

    return 0;
}