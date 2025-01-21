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

void leftRotate(vector<int> &arr, int n, int d){
    d = d % n;
    vector<int> temp(d);
    for(int i = 0; i < d; i++){
        temp[i] = arr[i];
    }
    for(int i = d; i < n; i++){
        arr[i-d] = arr[i];
    }
    for(int i = n-d; i < n; i++){
        arr[i] = temp[i-(n-d)];
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int d;
    cin >> d;
    leftRotate(arr, n, d);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}