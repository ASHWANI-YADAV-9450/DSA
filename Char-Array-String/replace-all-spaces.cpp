#include<iostream>
#include<string.h>
using namespace std;

//  Replace space with '@'

void replaceSpaces(char sentence[100]) {
    int i =0; 
    int n = strlen(sentence);

    for(int i=0; i<n; i++) {
        while(sentence[i] == ' ') {
            sentence[i] = '@';
        }
    }
}


int main() {
    char sentence[100];
    cin.getline(sentence, 100);

    cout<<"before: "<< sentence<<endl;
    replaceSpaces(sentence);

    cout<<"after replace: "<< sentence<<endl;
};