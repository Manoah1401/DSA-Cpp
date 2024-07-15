#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    int space=0;
    for(int i=1;i<=2*n-1;i++){
        int x;
        x=i;
        if(i>n){
            x=2*n-i;
        }
        //number
        for(int j=1;j<=n-x+1;j++){
            cout << "*";
        }
        //space
        for(int k=1;k<=space;k++){
            cout << " ";
        }
        //number
        for(int l=1;l<=n-x+1;l++){
            cout << "*";
        }
        cout << endl;
        if(i>=n){
            space-=2;
        }
        else{
            space+=2;
        }

    }

}

void pattern2(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int bottom=2*n-i-2;
            int right=2*n-j-2;

            int val= min(min(top,left),min(bottom,right));
            cout << 4-val << " ";
        }
        cout << endl;
    }
}

void pattern3(int n){
    int space=2*(n-1);
    for(int i=1;i<=2*n-1;i++){
        int x=i;
        if(i>n) x=2*n-i;
        //star
        for(int j=1;j<=x;j++){
            cout << "*";
        }
        //space
        for(int k=1;k<=space;k++){
            cout << " ";
        }
        //star
        for(int l=1;l<=x;l++){
            cout << "*";
        }
        cout << endl;
        if(i>=n){
            space+=2;
        }
        else{
            space-=2;
        } 
    }
}

int main(){
    int n;
    cin >> n;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    return 0;
}