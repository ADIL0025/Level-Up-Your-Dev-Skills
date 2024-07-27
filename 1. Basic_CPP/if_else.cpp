#include <bits/stdc++.h>
using namespace std;

int main() {
    // int a;
    // cout << "Enter your age: " <<endl;
    // cin >> a;

    // if(a >=18){
    //     cout << "You are a Adult" << endl; 
    // } else {
    //     cout << "You are not an adult" << endl;
    // }


    // int marks;
    // cout << "Enter your marks:" << endl;
    // cin >> marks;

    // if (marks < 25){
    //     cout << "Your grade is F" << endl;
    // } else if (marks >=25 && marks <=44){
    //     cout << "Your grade is E" << endl;
    // } else if (marks >=45 && marks <=49){
    //     cout << "Your grade is D" << endl;
    // } else if (marks >=50 && marks <=59){
    //     cout << "Your grade is C" << endl;    
    // } else if (marks >=60 && marks <=79){
    //     cout << "Your grade is B" << endl;
    // } else if (marks >=80 && marks <=100){
    //     cout << "Your grade is E" << endl;
    // }

    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    if (age < 18){
        cout << "You are not eligible for job";
    } else if (age <=57){
        cout << "eligible for job";
        if(age >= 54){
            cout << ", but retirement is soon" << endl;
        }
    } else {
        cout << "Retirement time" << endl;
    }


    return 0;
}