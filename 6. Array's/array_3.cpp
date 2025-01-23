#include <bits/stdc++.h>
using namespace std;

// ---------------------------- find the missing no. in the array
// int missingNumber(vector<int>&a, int N) {

//     int xor1 = 0;
//     int xor2 = 0;
//     int n = N - 1;
//     for(int i = 0; i < n; i++){
//         xor2 = xor2 ^ a[i];
//         xor1 = xor1 ^ (i+1);
//     }
//     xor1 = xor1 ^ N;
//     return xor1 ^ xor2;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << missingNumber(arr, n) << endl;
// }

// ---------------------------- find the maximum consecutive 1's in an array
// int findMaxConsecutiveOnes(vector<int>& nums) {
//     int maxi = 0;
//     int cnt = 0;

//     for(int i = 0; i < nums.size(); i++){
//         if(nums[i] == 1){
//             cnt++;
//             maxi = max(maxi, cnt);
//         }
//         else{
//             cnt = 0;
//         }
//     }
//     return maxi;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << findMaxConsecutiveOnes(arr) << endl;
// }

// ---------------------------- find the number that appears only once and the other's twice
int getSingleElement(vector<int> &arr){
	
	int xor1 = 0;
	for(int i = 0; i < arr.size(); i++){
		xor1 = xor1 ^ arr[i];
	}
	return xor1;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << getSingleElement(arr) << endl;
}