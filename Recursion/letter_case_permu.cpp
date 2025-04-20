#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

vector<string> v;

void solve(string ip, string op)
{
    if (ip.size() == 0)
    {
        v.push_back(op);
        return;
    }
    if (isalpha(ip[0]))
    {
        string op1 = op;
        string op2 = op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin()+0);
        solve(ip,op1);
        solve(ip,op2);
        return;
    }else{
        string op1 = op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op1);
        return;
    }
}
int main()
{
    string ip = "a1b1";
    string op = " ";
    solve(ip, op);

    for(auto i:v){
        cout<<i<<" ";
    }
}