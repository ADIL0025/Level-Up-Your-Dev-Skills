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
// vector<int> moveZeroes(vector<int> &arr, int n){
//     int j = -1;
//     for(int i = 0; i < n; i++){
//         if(arr[i] == 0){
//             j = i;
//             break;
//         }
//     }
//     if(j == -1){
//         return arr;
//     }
//     for(int i = j+1; i < n; i++){
//         if(arr[i] != 0){
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }
//     return arr;
// }

// int main(){
//     int n; 
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     moveZeroes(arr, n);
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// ------------------------------- Linear Search
// int linearSearch(vector<int> &arr, int n, int num){
//     for(int i = 0; i < n; i++){
//         if(arr[i] == num){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int num;
//     cin >> num;
//     cout << linearSearch(arr, n, num);
//     return 0;
// }

// ------------------------------- Union of two arrays
// vector < int > sortedArray(vector < int > a, vector < int > b) {

//     int n1 = a.size();
//     int n2 = b.size();
//     int i = 0;
//     int j = 0;

//     vector<int> unionArr;

//     while(i < n1 && j <n2){
//         if(a[i] <= b[j]){
//             if(unionArr.size() == 0 || unionArr.back() != a[i]){
//                 unionArr.push_back(a[i]);
//             }
//             i++;
//         }

//         else{
//             if(unionArr.size() == 0 || unionArr.back() != b[j]){
//                 unionArr.push_back(b[j]);
//             }
//             j++;
//         }
//     }

//     while(j < n2){
//         if (unionArr.size() == 0 || unionArr.back() != b[j]) {
//                 unionArr.push_back(b[j]);
//             }
//             j++;     
//         }

//     while(i < n1){
//         if (unionArr.size() == 0 || unionArr.back() != a[i]) {
//                 unionArr.push_back(a[i]);
//             }
//             i++;     
//         }
//         return unionArr;

// }

// int main(){
//     int n1;
//     cin >> n1;
//     vector<int> a(n1);
//     for(int i = 0; i < n1; i++){
//         cin >> a[i];
//     }
//     int n2;
//     cin >> n2;
//     vector<int> b(n2);
//     for(int i = 0; i < n2; i++){
//         cin >> b[i];
//     }
//     vector<int> unionArr = sortedArray(a, b);
//     for(int i = 0; i < unionArr.size(); i++){
//         cout << unionArr[i] << " ";
//     }
//     return 0;
// }


// ------------------------------- Intersection of two arrays
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{

	int i = 0;
	int j = 0;
	vector<int> ans;
	while(i < n && j < m){
		if(arr1[i] < arr2[j]){
			i++;
		}
		else if(arr2[j] < arr1[i]){
			j++;
		}
		else{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
	}
	return ans;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr1(n);
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    vector<int> arr2(m);
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }
    vector<int> ans = findArrayIntersection(arr1, n, arr2, m);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}