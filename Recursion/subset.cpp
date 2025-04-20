#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
set<string>st;
void solve(string ip,string op){
    if(ip.size()==0){
        st.insert(op);
        return;
    }
    string op1 = op;
    string op2 = op;
    op1.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
    return;
}

int main(){
    string ip = "aacd";
    string op = " ";
    solve(ip,op);
    for(auto i:st){
        cout<<i<<" ";
    }
}