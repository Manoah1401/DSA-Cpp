#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(2);
    v.emplace_back(3);
    v.emplace_back(5);
    v.emplace_back(1);
    v.emplace_back(9);
    // cout << v[0] << endl;

    vector<pair<int,int>> v1;
    v1.emplace_back(1,2);
    // cout << v1[0].first << endl;
    // cout << v1[0].second <<endl;

    ///iterator
    // cout << *(v.begin()); //*() give value of address
    vector<int>::iterator it=v.begin();
    // cout << *(it);

    for(vector<int>::iterator it=v.begin(); it!=v.end();it++){
        // cout << *(it) << endl;
    }

    for(auto it:v){
        // cout << it << endl;
    }

    v.erase(v.begin()+1);
    // cout << *(v.begin()+1);

    v.insert(v.begin()+2,10);
    v.insert(v.begin(),2,100);
    for(auto it:v){
        // cout << it << endl;
    }
    


}