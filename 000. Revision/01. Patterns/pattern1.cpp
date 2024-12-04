#include<bits/stdc++.h>
using namespace std;
void pattern1(int rows){
    for(int i=0;i<rows;i++){
        for(int j=rows-i;j>0;j--){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2(int rows){
    for(int i=0;i<=rows;i++){
        for(int j=0;j<=i;j++){
            cout << " ";
        }
        for(int j=0;j<2*(rows-i)-1;j++){
            cout << "*";
        }

        cout << endl;
    }
}
void pattern3(int rows){
    for(int i=0;i<=2*rows-1;i++){
        int star=i;
        if(i>rows){
            star=2*rows-i;
        }
        for(int j=0;j<star;j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern4(int rows){
    for(int i=0;i<=2*rows-1;i++){
        int stars=rows-i;
        int space=2*i;
        if(i>=rows){
            stars=i-rows+1;
            space=2*rows-2*(i-rows+1);
        }
        for(int j=0;j<stars;j++){
            cout << "*";
        }
        for(int j=0;j<space;j++){
            cout << " ";
        }
        for(int j=0;j<stars;j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int rows;
    cin >> rows;
    //pattern1(rows);
    //pattern2(rows);
    //pattern3(rows);
    pattern4(rows);
}