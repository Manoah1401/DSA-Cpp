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
int main(){
    int n;
    cin >> n;
    pattern1(n);
    return 0;
}