#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    //precompute
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    int find;
    cin >> find;

    cout << mp[find] <<endl;

    for(auto it : mp){
        cout << it.first << "-->" << it.second<< endl;
    }
}