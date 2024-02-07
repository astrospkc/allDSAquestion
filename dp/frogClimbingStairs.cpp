#include<bits/stdc++.h>
using namespace std;

int EnergyTaken(int ind, vector<int>& arr , vector<int>& dp){
    if(ind==0){
        return 0;
    }
    if(dp[ind]!= -1) return dp[ind];
    int oneJump = EnergyTaken(ind-1, arr,  dp) + abs(arr[ind] - arr[ind-1]);
    int twoJump = INT_MAX;
    if(ind>1){
         twoJump = EnergyTaken(ind-2, arr,dp) + abs(arr[ind]- arr[ind-2]);
    }
    dp[ind] = min(oneJump, twoJump);
    
    return dp[ind];


}
int main(){
    vector<int> arr = {10, 20, 30, 10};
    int n = arr.size();
    
    vector<int> dp(n+1, -1);
    cout<<EnergyTaken(arr.size()-1, arr, dp);
}