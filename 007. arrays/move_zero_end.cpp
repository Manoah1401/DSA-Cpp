#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=8;
    int arr[n]={1,2,0,0,3,0,4,5};
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
        }
    }

    for(auto it:arr){
        cout << it <<" ";
    }
}