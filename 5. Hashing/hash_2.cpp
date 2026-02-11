#include <bits/stdc++.h>
using namespace std;

// For Characters hashing 

int main(){
    string s;
    cin >> s;

    // Precompute
    int hash[26] = {0}; // if we dont know the index value of characters we simply take the 'size = 256' because it contains all the elements. 
    // int hash[256] = {0};
    for (int i = 0; i < s.size(); i++){
        hash[s[i]-'a']++; // hash[s[i]]++;
    }

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        // fetch
        cout << hash[c-'a'] << endl;
    }
    
}