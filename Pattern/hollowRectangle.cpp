#include<iostream>
using namespace std;


// int main(){
// // Holow  Rectangle
//     for(int row=0; row<3; row++ ){
//         // first row or last row
//         if(row == 0 || row ==2){
//             for(int col=0; col<5; col++){
//                 cout<< "* ";
//             }
//         }else{
//             // remaining middle rows
//             cout<< "* ";
//             //spaces'
//             for(int i=0; i<3; i++){
//                 cout<<"  ";
//             }
//             //last star
//             cout<<"* ";
//         }
//         cout<< endl;
//     }
// }

///  Dynamic
int main(){


int rowCount, colCount;
cin>> rowCount;
cin >> colCount;

// Holow  Rectangle
    for(int row=0; row<rowCount; row++ ){
        // first row or last row
        if(row == 0 || row ==rowCount-1){
            for(int col=0; col<colCount; col++){
                cout<< "* ";
            }
        }else{
            // remaining middle rows
            cout<< "* ";
            //spaces'
            for(int i=0; i<colCount-2; i++){
                cout<<"  ";
            }
            //last star
            cout<<"* ";
        }
        cout<< endl;
    }
}