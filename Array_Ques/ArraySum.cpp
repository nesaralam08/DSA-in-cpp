#include<bits/stdc++.h>
using namespace std;
int ArrSum(vector<int>arr){
    int sum = 0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    vector<int>arr = {2,4,7,9,7,5};
    cout<<" Sum is : " << ArrSum(arr);

}