#include<iostream>
#include<string.h> 
using namespace std;

int getLength(char name[]) {
    int length = 0;
    int i =0;

    while(name[i] != '\0' ) {
    length++;
    i++;
    }

    return length;
}

int main() {
    char name[100];
    cin >> name;
    cout<<"length : "<<getLength(name)<<endl;

    //using stl function
    cout <<"lenght --> "<< strlen(name)<<endl;
}