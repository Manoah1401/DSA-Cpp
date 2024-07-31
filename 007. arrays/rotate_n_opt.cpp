#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int rot;
    cin >> rot;

    int arr[n]={1,2,3,4,5};
    reverse(arr,arr+rot);
    reverse(arr+rot,arr+n);
    reverse(arr,arr+n);

    for(auto it : arr){
        cout << it << " ";
    }
}