#include <bits/stdc++.h>
using namespace std;

// Fibonacci Series
int f(int n){
    if(n <= 1) return n;
    int last = f(n-1);
    int second_last = f(n-2);
    return last + second_last;
}

int main(){
    cout << f(4);

    return 0;
}