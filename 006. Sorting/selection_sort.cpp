#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        

    }
    for(int i=0;i<n;i++){
        cout << arr[i] <<endl;
    }
}