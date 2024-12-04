#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v={1,2,3,5,6};
    map <int,int> mp;
    int total = 8;

    for(int i=0;i<v.size();i++){
        int a=v[i];
        int left=total-a;
        if(mp.find(left)!=mp.end()){
            cout << "YES";
            break;
        }
        mp[a]=i;
    }

}