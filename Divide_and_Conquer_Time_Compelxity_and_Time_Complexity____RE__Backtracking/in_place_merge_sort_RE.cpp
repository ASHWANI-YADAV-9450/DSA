// #include<iostream>
// #include<vector>
// using namespace std;

// void merge(vector<int>&v, vector<int>&temp, int start, int mid, int end) {
//     int i= start, j = mid + 1, k = start;
//     while(i <= mid && j <=end) {
//         if(v[i] <= v[j])  temp[k++] = v[i++];

//         else
//         temp[k++] = v[j++];
//     }
//         while(i<=mid) temp[k++] = v[i++];
//         while(j<=end) temp[k++] = v[j++];
//         while(start <=end) {
//             v[start] = temp[start];
//             start++;
//         }
//     }




// void mergeSort(vector<int>&v, vector<int>&temp, int start, int end) {
//     if(start >=end) return ;
//     int mid = (start + end) >> 1;
//     mergeSort(v, temp, start, mid);
//     mergeSort(v, temp, mid + 1, end);
//     merge(v, temp, start, mid, end);
// } 

// int main() {
//     vector<int> nums = {5,2,3,1};
//     vector<int>temp(nums.size(), 0);
//     mergeSort(nums, temp, 0, nums.size() -1);
//    cout<<"printing ans" << endl;

//   for (int i = 0; i < nums.size(); i++) {
//         cout << nums[i] << " ";
//     }

//     cout << endl;
// }


// above code is simple solve using merge sorted , 
// T.C->> O(nlogn);
// S.C->> O(n)

/// to reduce space complexity wehave 2 method 

// Method one solutin // use this method always


#include<iostream>
#include<vector>
using namespace std;

void mergeInPlace(vector<int>&v, int start, int mid, int end) {
    
    int total_len = end - start + 1;
    int gap = total_len /2 + total_len % 2; // ceil
    while(gap > 0) {
        int i =start, j = start + gap;
        while( j <= end) {
            if(v[i] > v[j]) {
                swap(v[i], v[j]);
            }
            ++i, ++j;
        }
        gap = gap <= 1 ? 0 : (gap / 2) + (gap % 2);
    }
    }




void mergeSort(vector<int>&v, int start, int end) {
    if(start >=end) return ;
    int mid = (start + end) >> 1;
    mergeSort(v, start, mid);
    mergeSort(v, mid + 1, end);
    mergeInPlace(v, start, mid, end);
} 

int main() {
    vector<int> nums = {5,2,3,1};
   
    mergeSort(nums, 0, nums.size() -1);
   cout<<"printing ans" << endl;

  for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
} 