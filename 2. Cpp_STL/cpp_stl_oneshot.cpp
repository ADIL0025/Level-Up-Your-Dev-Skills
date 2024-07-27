#include <bits/stdc++.h>
using namespace std;

// explain Pairs
void explainPair(){ 
    pair<int , int> p = {1,2};
    cout << p.first << " " << p.second << endl;

    pair<int , pair<int , int>> q = {1,{2,3}};
    cout << q.first << " " << q.second.first << " " << q.second.second << endl;

    pair<int , int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[0].first << " " << arr[0].second << endl;
}


// Explain Vector
void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int ,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v(5, 100); // {100,100,100,100,100}

    vector<int>v(5); // {0,0,0,0,0}

    vector<int> v1(5,20); // {20,20,20,20,20}
    vector<int> v2(v1); // {20,20,20,20,20}
}

/*void print() {
    cout << "Hello" << endl;
}

int sum (int a, int b) {
    return a+b;
}

int main(){
    print();
    cout << sum(1,2) << endl;
    return 0;
}*/