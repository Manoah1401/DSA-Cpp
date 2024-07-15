#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    arr[0]=100;
    arr[1]=2;
    arr[2]=10;
    arr[3]=73;
    arr[4]=4;

    sort(arr,arr+5);
    for(auto i=0;i<5;i++){
        cout << arr[i] << endl;
    }

    int num=7;
    int cnt=__builtin_popcount(num); //__builtin_popcountll(); for long long numbers

    cout << "Binary 1s: "<<cnt;
    
    
    return 0;
}