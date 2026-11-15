#include<bits/stdc++.h>
using namespace std;

void divisor(int n){
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++){    //use i*i<=n rather than i<=sqrt(n) as sqrt(n) is a function and takes more time
        if(n%i==0){
            v.push_back(i);
            if(i!=n/i){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end(), greater<int>());

    for(vector<int>::iterator it=v.begin(); it!=v.end();it++){
        cout << *(it) << " ";

    }
}

int main(){
    int num;
    cin >> num;
    divisor(num);
}