#include<bits/stdc++.h>
using namespace std;

void count_digit(int n){
    int count=0;
    while(n>0){
        n=n/10;
        count=count+1;
    }
    cout << count << endl;
}

void evenlyDivides(int N){
        int count=0;
        int last=0;
        int N1=N;
        while(N1>0){
            last=N1%10;
            N1=N1/10;
            if(last!=0 && N%last==0){
                count=count+1;
            }
            
        }
        cout << count << endl;
    }

int main(){
    int num;
    cin >> num;
    count_digit(num);
    evenlyDivides(num);
}