#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[8]={1,1,1,2,2,2,3,3};

    int i=0;
    for(int j=i;j<8;j++){
        if(arr[i]<arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout << "Number of duplicates: "<<i+1 << endl;
    for(int j=0;j<i+1;j++){
        cout << arr[j] <<endl;
    }

}