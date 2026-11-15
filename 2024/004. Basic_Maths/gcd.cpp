#include<bits/stdc++.h>
using namespace std;

void gcd(int n1,int n2){
    int g_cd=0;
    for(int i=min(n1,n2);i>=1;i--){
        if(n1%i==0 && n2%i==0){
            g_cd=i;
            break;
        }
    }
    cout << g_cd;
}

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    gcd(n1,n2);
}