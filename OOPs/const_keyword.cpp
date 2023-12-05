#include<iostream>
using namespace std;


class abc
{
      int x;
        int *y;
    public:
    abc()
    {
      
        x=0;
        y= new int(0);
    }

    int getX() const
    {
        return x;
    }

    void setX(int _val) 
    {
        x = _val;
    }

    int getY() const
    {
        return *y;
    }

    void setY(int _val)
    {
        *y = _val;
    }
};

int main() {
    abc a;
    cout <<a.getX() <<endl;
    cout << a.getY() << endl;
    return 0;
}

int main2() {
    // const int x =5; // x is constant.
    // initialization can be done .
    // but we cant re-assign a value.
    // x =10; 



    // 2. const with pointers
    // int *a = new int ;
    // *a =2;
    // cout << *a << endl;
    // // delete a;
    // int b =5;
    // a = &b;
    // cout << *a << endl;


// const int *a = new int(2) ; // CONST data, NON-CONST pointer
// cout << *a << endl;
    
//     int b = 20;
//     a = &b;
//     cout << *a << endl;


    // cout << *a << endl; 

   
    // cout << x << endl;
    return 0;
}