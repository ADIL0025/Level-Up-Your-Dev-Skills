#include <bits/stdc++.h>
using namespace std;


// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability of code
// Functions are used to use the same code multiple times

// return 
// parameterised
// non-parameterised

// void -> which does not return anything
// void printName(){
//     cout << "Hey! Striver" << endl;
// }
// int main (){
//     printName();
//     return 0;
// }

// parameterised
// void printName(string name) {
//     cout << "Hey! " << name << endl;
// }

// int main(){
//     string name;
//     cin >> name;
//     printName(name);

//     string name2;
//     cin >> name2;
//     printName(name2);

//     return 0;
// }

// Take two numbers and print their sum (used return function)
// int sum(int a, int b) {
//     int c = a + b;
//     return c;
// }

// int main(){
//     int a, b;
//     cin >> a >> b;
//     cout << sum(a, b) << endl;
//     return 0;
// }


// int maxx(int a, int b) {
//     if(a > b) return a;
//     else return b;
// }

// int main(){
//     int a, b;
//     cin >> a >> b;
//     cout << maxx(a, b) << endl;
//     return 0;
// }



//Pass by value
// void doSomething(int a) {
//     cout << a << endl;
//     a +=5;
//     cout << a << endl;
//     a +=5;
//     cout << a << endl;
// }

// int main() {
//     int a;
//     cin >> a;
//     doSomething(a);
//     return 0;
// }


// Pass by reference
// void doSomething(string &s) {
//     s[0] = 't';
//     cout << s << endl;
// }

// int main() {
//     string s;
//     cin >> s;
//     doSomething(s);
//     cout << s << endl;
//     return 0;
// }



// int main(){
//     int arr[5];
//     for (int i = 0; i <= 4; i++) {
//         cin >> arr[i];
//     }

//     for(int i = 0; i <= 4; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

void doSomething (int arr[], int n) {
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}

int main(){
    int n = 5;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    doSomething(arr, n);
    cout << "Value inside int main: " << arr[0] << endl;

    return 0;
}