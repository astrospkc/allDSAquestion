#include<bits/stdc++.h>
using namespace std;

int f(int ind, int k , vector<int>& height, vector<int>& dp){
    if(ind ==0) return 0;

    int minSteps = INT_MAX;
    int jumps = 0;
    if(dp[ind]!=-1){
        return dp[ind];
    }
    for(int j = 1; j<=k; j++){
        if((ind-j)>=0){
             jumps = f(ind -j, k, height, dp) + abs(height[ind] - height[ind-j]);
        minSteps = min(minSteps, jumps);
        }
        
    }
    dp[ind] = minSteps;
    return dp[ind];
}

int main(){

    vector<int> height = {10, 40, 30, 10};
    int k = 2;
    int n = height.size();
    vector<int> dp(n , -1);
    // for(int i =0 ; i<n; i++){
    //     int minSteps = INT_MAX;
    //     for(int j =1; j<=k; j++){
    //         if((i-j)>=0){
    //             int jumps = dp[i-j] + abs(height[i] - height[i-j]);
    //             minSteps = min(jumps, minSteps);
    //         }
            
    //     }
    //     dp[i] = minSteps;
    // }
    // cout<<dp[n];
    cout<<f(n-1, k,  height, dp );
    return 0;
}