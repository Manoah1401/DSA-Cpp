#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[8]={1,5,8,2,3,4,7,7};
    int largest=arr[0];
    int second_largest=INT_MIN;
    for(int i=0;i<8;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]>second_largest){
            second_largest=arr[i];
        }
    }
    cout << second_largest;

}