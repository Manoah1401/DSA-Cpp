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

void count_log(int n){
    int val=(int)(log10(n) + 1);
    cout << val << endl;
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
void armstrong(int n){
    int last=0;
    int sum=0;
    int n1=n;

    while(n>0){
        last=n%10;
        sum=sum+(last*last*last);
        n=n/10;
    }

    if(sum==n1){
        cout << "It is armstrong";
    }
    else{
        cout << sum;
    }
}

int main(){
    int num;
    cin >> num;
    count_digit(num);
    count_log(num);
    evenlyDivides(num);
    armstrong(num);
}