#include <bits/stdc++.h>
using namespace std;

// ---------------------------- Left Rotate an array by one place

// void leftRotate(vector<int> &arr, int n){
//     int temp = arr[0];
//     for(int i = 1; i < n; i++){
//         arr[i-1] = arr[i];
//     }
//     arr[n-1] = temp;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     leftRotate(arr, n);
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// ---------------------------- Left Rotate an array by d places

// void leftRotate(vector<int> &arr, int n, int d){
//     d = d % n;
//    // ------ Brute Force Approach
//     vector<int> temp(d);
//     for(int i = 0; i < d; i++){
//         temp[i] = arr[i];
//     }
//     for(int i = d; i < n; i++){
//         arr[i-d] = arr[i];
//     }
//     for(int i = n-d; i < n; i++){
//         arr[i] = temp[i-(n-d)];
//     }

//     // ------ Optimal Approach
//     reverse(arr.begin(), arr.begin() + d);
//     reverse(arr.begin() + d, arr.end());
//     reverse(arr.begin(), arr.end());
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     int d;
//     cin >> d;
//     leftRotate(arr, n, d);
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// ---------------------------- Move all zero's to the end of the array


// ------------ Brute force approach
// vector<int> moveZeroes(vector<int> &arr, int n){
//     vector<int> temp;
//     for(int i =0; i <n; i++){
//         if(arr[i] != 0){
//             temp.push_back(arr[i]);
//         }
//     }
//     int nz = temp.size();
//     for(int i = 0; i < nz; i++){
//         arr[i] = temp[i];
//     }
//     for(int i = nz; i < n; i++){
//         arr[i] = 0;
//     }
//     return arr;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     moveZeroes(arr, n);
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// ------------ Optimal approach (Two pointer approach)
vector<int> moveZeroes(vector<int> &arr, int n){
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1){
        return arr;
    }
    for(int i = j+1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    return arr;
}

int main(){
    int n; 
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    moveZeroes(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}