#include <bits/stdc++.h>
using namespace std;

// ---------------------------- find the largest element in the array
// int findMax(vector<int> &arr, int n) {
//     int max = arr[0];
//     for (int i = 1; i < n; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     return max;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << findMax(arr, n) << endl;
// }

// ---------------------------- find the second largest element in the array
// int secondlargest(vector<int> &a, int n){
//     int largest = a[0];
//     int slargest =  -1;
//     for(int i = 0; i < n; i++){
//         if(a[i] > largest){
//             slargest = largest;
//             largest = a[i];
//         }
//         else if (a[i] < largest && a[i] > slargest){
//             slargest = a[i];
//         }
//     }
//     return slargest;
// }

// int secondsmallest(vector<int> &a, int n){
//     int smallest = a[0];
//     int ssmallest = INT_MAX;
//     for(int i = 0; i < n; i++){
//         if(a[i] < smallest){
//             ssmallest = smallest;
//             smallest = a[i];
//         }
//         else if (a[i] != smallest && a[i] < ssmallest){
//             ssmallest = a[i];
//         }
//     }
//     return ssmallest;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << "Second Largest Element is: " <<secondlargest(arr, n) << endl;
//     cout << "Second Smallest Element is: " <<secondsmallest(arr, n) << endl;
// }

// ---------------------------- Check if an Array is Sorted
int isSorted(int n, vector<int> a) {
    for(int i = 1; i < n; i++){
        if(a[i] >= a[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << isSorted(n, arr) << endl;
}
