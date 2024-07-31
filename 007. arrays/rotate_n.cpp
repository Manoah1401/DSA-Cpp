#include<bits/stdc++.h>
using namespace std;

int main(){
    int rot;
    cin >> rot;
    int n=5;
    int arr[n]={1,2,3,4,5};

    vector<int> v;

    for(int i=0;i<rot;i++){
        v.emplace_back(arr[i]);
    }

    for(int i=0;i<n;i++){
        arr[i]=arr[i+rot];
    }
    int index=0;
    for(int i=n-rot;i<n;i++){
        arr[i]=v[index];
        index++;
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}