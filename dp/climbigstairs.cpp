#include<bits/stdc++.h>
using namespace std;

int climbingStairs(int n){
    if(n==1){
        return 1;
    }
    // int left = climbingStairs(n-1);
    // int right = climbingStairs(n-2);
    // return left+right;
    return climbingStairs(n-1) + climbingStairs(n-2);
}

int main(){

    int n;
    cout<<"enter number of stairs: "<<endl;
    cin>>n;
    cout<<climbingStairs(n);
}
