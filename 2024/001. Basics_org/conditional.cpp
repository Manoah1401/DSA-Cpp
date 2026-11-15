#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout << "Enter age: ";
    cin >> age;
    if(age>18){
        cout << age <<" is permitted";
    }
    else{
        cout << "underage";
    }
    return 0;
}