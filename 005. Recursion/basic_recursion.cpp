#include<bits/stdc++.h>
using namespace std;

void func(int &cnt){
    cout << cnt<< endl;
    if(cnt==4){
        return;
    }
    cnt++;
    func(cnt);
}
int main(){
    int cnt=0;
    func(cnt);
    return 0;
}