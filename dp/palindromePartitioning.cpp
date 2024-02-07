#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i, int j, string s){
    while(i<j){
        if(s[i]!= s[j]){
            return false;
        }
        i++;
        j--;
    }
}

int f(int i, int n, string s, vector<int>& dp){
    if(i==n){
        return 0;
    }
    int cost  =0;
    int minCost = INT_MAX;
    if(dp[i]!= -1) return dp[i];
    for(int j =i; j<n; j++){
        if(palindrome(i, j, s)){
            cost = 1+f(j+1, n, s, dp);
            minCost = min(minCost, cost);
        }
    }

    return dp[i] = minCost;
}

int main(){
    string s = "bababcbadcede";
    int n = s.length();
    vector<int> dp(n,-1);

    cout<<f(0,n,s,dp)-1;
}