#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void quickSort(vector<int>& a, int start, int end) {
    if(start >=end) return;
    int pivote =end;
    int i= start -1;
    int j =start;

    while(j < pivote) {
        if(a[j] < a[pivote]) {
            ++i;
           swap(a[i], a[j]);
        }
        ++j;
    }
    ++i;
     swap(a[i], a[pivote]);
            quickSort(a, start, i -1);
            quickSort(a, i+1, end);
}

int main() {
    vector<int> a = {7, 2, 1, 8, 6, 3, 5, 4};
    int start = 0;
    int end = a.size() - 1;

    quickSort(a, start, end);

    cout << "Sorted array: ";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}