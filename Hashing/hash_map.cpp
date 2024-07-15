#include <bits/stdc++.h>
using namespace std;

// using Mapping techniques >> it will be working fine with ordered mapping and also it will be working fine with unordered mapping

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Pre-compute
    // map<int , int> mpp; 
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    // iterate in the map
    // for(auto it : mpp){
    //     cout << it.first << "->" << it.second << endl;
    // }

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }
    return 0;
}