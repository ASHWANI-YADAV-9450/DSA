#include<iostream>
#include<string>
using namespace std;


int main() {
    string str;
    // cin >>str;

    

    getline(cin, str);
     cout <<str<<endl;


     cout<< "length: " <<str.length()<< endl;
     cout<< "isEmpty: " << str.empty() <<endl;
       str.push_back('A');

       cout<<"push back: "<<str  << endl;
       
       str.pop_back();
       cout<<"after pop back: " << str <<endl;
// sub string nikalne ke liye sub str inkalte hai
       cout<<" subtr: "<< str.substr(0, 6) << endl;

       string a = "asw";
       string b  = "aswd";

       if(a.compare(b) == 0) {
        cout <<"a and b are exactly same string" <<endl;
       }
       else {
        cout<<" a and b are not same " <<endl;
       }

    return 0;
}