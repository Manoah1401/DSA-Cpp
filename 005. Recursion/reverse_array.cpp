#include<bits/stdc++.h>
using namespace std;

void swap(int f,int l,int arr[]){
    int x=arr[f];
    arr[f]=arr[l];
    arr[l]=x;
}
void rev(int f,int l,int arr[]){
    if(f>=l){
        return;
    }
    swap(f,l,arr);
    rev(f+1,l-1,arr);
}

int main(){
    int n=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    rev(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
}