#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[9]={1,1,2,2,3,4,4,5,5};

    map<long long,int> mp;
    for(int i=0;i<9;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        if(it.second==1){
            cout << it.first;
        }
    }
}