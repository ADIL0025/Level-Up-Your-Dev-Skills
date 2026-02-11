#include <bits/stdc++.h>
using namespace std;
/*
void print() {
    cout << 1 << endl;
    print();
}

int main(){
    print();
} */ 

// Recursion with specific conditions

int cnt = 0;
void print(){
    if(cnt == 4){
        return;
    }
    cout << cnt << endl;
    cnt++;
    print();
} 

int main(){
    print();
}