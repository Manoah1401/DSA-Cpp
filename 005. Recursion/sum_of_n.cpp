#include<bits/stdc++.h>
using namespace std;
//parameterised
void parameter(int i, int sum){
    if(i<1){
        cout << sum;
        return;
    }
    parameter(i-1,sum+i);
}

int functional(int n){
    if(n==0){
        return 0;
    }
    return n+functional(n-1);
}

int main(){
    int n;
    cin >> n;
    // parameter(n,0);
    cout << functional(n);
}