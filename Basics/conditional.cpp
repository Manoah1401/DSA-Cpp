#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cin >> age;
    if (age > 18){
        cout << "Ok";
    }

    else if(age <=18 ){
        cout << age << " not ok";
    }
    return 0;
}