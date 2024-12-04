#include<bits/stdc++.h>
using namespace std;

int main(){
    //upside triangle
    int number;
    cin >> number;
    for(int i=0;i<number-1;i++){
        for(int j=0;j<i+1;j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=0;i<number;i++){
        for(int j=0;j<number-i;j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;cout << endl;
    //downside triangle
    for(int i=0;i<number;i++){
        for(int j=0;j<number-i;j++){
            cout << "* ";
        }
        cout << endl;
    }


    //middle traingle type 1
    for(int i=0;i<number;i++){
        //spcae
        for(int j=0;j<number-i-1;j++){
            cout << " ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout << "*";
        }
        cout << endl;
    }

    //middle traingle type 2
    for(int i=0;i<number;i++){
        //spcae
        for(int j=0;j<number-i-1;j++){
            cout << " ";
        }
        //star
        for(int j=0;j<i+1;j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //both side triangle
    for(int i=0;i<2*number-1;i++){
        int x;
        x=i;
        if(i>number-1){
            x=2*number-i-2;
        }
        for(int j=0;j<x+1;j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;


    return 0;
}
