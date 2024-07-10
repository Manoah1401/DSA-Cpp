#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(2);
    v.emplace_back(3);
    cout << v[0] << endl;

    vector<pair<int,int>> v1;
    v1.emplace_back(1,2);
    cout << v1[0].first << endl;
    cout << v1[0].second <<endl;
}