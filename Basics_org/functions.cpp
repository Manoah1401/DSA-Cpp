#include<bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    
    a+=1;
    b+=2;
    return a,b;
}

int main(){
    int num1, num2, num3;
    cin >> num1 >>num2;
    num3=sum(num1,num2);
    cout << num3;
    return 0;
}