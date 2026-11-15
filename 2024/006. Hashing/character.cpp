#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    char arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    //precomputing
    int hash[25]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]-'a']+=1;
    }
    //fetch
    char find;
    cin >> find;

    cout << hash[find-'a'];

}