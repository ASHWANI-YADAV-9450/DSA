#include<iostream>
#include<string.h>
using namespace std;

int getLength(char name[]) {
    int length = 0;
    int i = 0;

    while(name[i] !='\0') {
        length++;
        i++;
    }
    return length;
}





int main() {


    // char name[100];
    // cin >> name;

    // for(int i=0; i< 7; i++) {
    //     cout << "index: " << i << " value: " <<name[i] <<endl;
    // }

    // int value = (int)name[6];
    // cout<<"value is : "<<value <<endl;


    // char arr[100];
    // // cin >> arr;
    // cin.getline(arr, 50);

    // cout <<arr;



    char name[100];
    cin>> name;

    cout << "lenght is: " << getLength(name) << endl;

    // using stl

cout <<"length -> " <<strlen(name) << endl;


    return 0;
}