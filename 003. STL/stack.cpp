#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.emplace(3);

    cout << st.top() << endl;
    st.pop();
    cout << st.top();
    return 0;
}