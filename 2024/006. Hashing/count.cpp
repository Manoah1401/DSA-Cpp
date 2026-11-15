#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        arr[i]=a;
    }
    //precompute
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    //hash table
    int find;
    cin >> find;

    cout << hash[find];

}