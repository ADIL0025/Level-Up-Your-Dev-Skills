#include<bits/stdc++.h>
using namespace std;

//  ---------------------------->>>>>      Sum of N numbers(N to 1)
// ---------------------------->>>>>       parameterized
/*void func(int i, int sum){
    if(i < 1){
        cout<< sum << endl;
        return;
    }
    func(i-1,sum+i);
}

int main(){
    int n;
    cin >> n ;
    func(n,0);
    return 0;
}*/

// ---------------------------->>>>>       functional recursion
/*int sum(int n)
{
    if(n == 0) return 0;
    return n + sum(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}*/

// ---------------------------->>>>>       Factorial of a number

//  ---------------------------->>>>>      parameterized
// int fact(int n){
//     if(n == 0) return 1;
//     return n * fact(n-1);
// }

// int main(){
//     int n;
//     cin >> n;
//     cout << fact(n);
//     return 0;
// }

// ---------------------------->>>>>      functional recursion
int fact(int n, int sum){
    if(n == 0) return sum;
    return fact(n-1,sum*n);
}

int main(){
    int n;
    cin >> n;
    cout << fact(n,1);
    return 0;
}