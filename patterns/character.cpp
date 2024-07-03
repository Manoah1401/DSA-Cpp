#include<bits/stdc++.h>
using namespace std;
void character1(int n){
    for(int i=1;i<=n;i++){
        for(char c='A';c<='A'+i-1;c++){
            cout << c;
        }
        cout << endl;
    }
}

void character2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char c='A'+i-1;
            cout << c;
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    // character1(n);
    character2(n);
}