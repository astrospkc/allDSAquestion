// #include<bits/stdc++.h>
// using namespace std;


// int f(int n, vector<int>& dp)
// {
//     if(n<=1){
//         return n;
//     }

//     if(dp[n] != -1) return dp[n];

//     return dp[n] = f(n-1, dp) + f(n-2, dp);


// }

// int main(){
//     int n=5;
//     // cout<<"enter the number upto you want f number: ";
//     // cin>>n;
//     vector<int> dp(n+1, -1);
//     cout<<f(n, dp);
// }


#include<bits/stdc++.h>
using namespace std;

int main(){
    int prev2 = 0; 
    int prev = 1;
    int n;
    cout<<"enter the number for which you want to obtain fibo series";
    cin>>n;
    for(int i=0; i<=n; i++){
        int curr = prev2 + prev;
        prev2 = prev;
        prev = curr;
    }

    cout<<prev;
    return 0;
}