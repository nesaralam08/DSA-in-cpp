#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> find(int arr[],int n){
    int i=0;
    vector<int>ans;
    while(i<n){
        // if(i!=arr[i]+1){
        //     swap(arr[arr[i]-1],arr[i]);
        // }else{
        //     i++;
        // }
        if(arr[i]!=arr[arr[i]-1])
            swap(arr[i],arr[arr[i]-1]);
        else
            i++;
    }
    for(int i=0;i<n;i++){
        if(i!=arr[i]+1){
            ans.push_back(i+1);
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
int main(){

    int arr[] = {2,3,5,6,2,3,7};
    int n = 7;
    vector<int>ans;
    cout<<"Hello";
    ans = find(arr,n);
    for(auto i:ans)
        cout<<i<<" ";

    // cout<<"Hello Bhai"<<endl;
}