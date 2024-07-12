#include<bits/stdc++.h>
using namespace std;

// Print name N times Recursion
/*void func(int i, int n){
   
   // Base Condition.
   if(i>n){
    return;
   } 
   cout<<"Adil"<<endl;
   // Function call to print till i increments.
   func(i+1,n);

}
int main(){
  int n;
  cin >> n;
  func(1,n);
  return 0;
} */

// Print linearly from 1 to N
/*void func(int i, int n){
    if(i>n){
        return;
    }
    cout << i << endl;
    func(i+1,n);
}

int main(){
    int n;
    cin >> n;
    func(1,n);
    return 0;
}*/

// Print linearly from N to 1
/*void func(int i, int n){
    if(i < 1){
        return;
    }
    cout << i << endl;
    func(i-1,n);
}

int main(){
    int n;
    cin >> n;
    func(n,n);
    return 0;
}*/

// Print linearly from 1 to N but by back tracking
/*void func(int i, int n){
    if(i < 1){
        return;
    }
    func(i-1,n);
    cout<< i << endl;
}
int main(){
    int n;
    cin >> n;
    func(n,n);
    return 0;
}*/

// Print linearly from N to 1 but by back tracking
void func(int i, int n){
    if(i > n){
        return;
    }
    func(i+1,n);
    cout<< i << endl;
}
int main(){
    int n;
    cin >> n;
    func(1,n);
    return 0;
}