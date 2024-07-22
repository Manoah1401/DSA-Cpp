#include<bits/stdc++.h>
using namespace std;

void name(int i, int n){
    if(i>n){
        return;
    }
    name(i+1,n);
    cout << "Manoah" << endl;
}
// reverse
void reverse(int i, int n){
    if(i<1){
        return;
    }
    cout << i << endl;
    reverse(i-1,n);
}
//backtracking

void back(int i, int n){
    if(i<1){
        return;
    }
    back(i-1,n);
    cout << i << endl;
}

// n to 1 using backtracking

void rev_back(int i, int n){
    if(i>n){
        return;
    }
    rev_back(i+1,n);
    cout << i << endl;
}

int main(){
    int n=0;
    cin >> n;
    // name(1,n);
    // reverse(n,n);
    // back(n,n);
    rev_back(1,n);
}