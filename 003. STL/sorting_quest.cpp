//sort ascending for 2nd number
//if 2nd same for both sort the 1st number in descending

#include<bits/stdc++.h>
using namespace std;

bool check(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true; //no swap
    else if(p1.second > p2.second) return false;

    if(p1.first > p2.first) return true;
    else false;

}

int main(){
    pair<int,int> p[]={{1,2},{3,4},{4,2}}; //output - {4,2},{1,2},{3,4}
    sort(p,p+3,check);
    cout << p[0].first << p[0].second << endl;
    cout << p[1].first << p[1].second << endl;
    cout << p[2].first << p[2].second;
    return 0;
}