/*
    Topics:
        Dynamic Programming (Bottom-up)
    Time Complexity:
        O(N^2)
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> prices = {1,5,8,9,10,17,17,20,24,30};

int maxRevenue(int n){
    int dp[n+1];
    dp[0]=0;
    for(int i =1; i <= n; i++){
        int maxRev = 0;
        for(int j = 1; j<=i; j++){
            maxRev = max(maxRev, prices[j-1] + dp[i-j]);
        }
        dp[i] = maxRev;
    }
    return dp[n];
}

int main()
{
    for(int i = 0; i<10; i++)cout<<maxRevenue(i+1)<<endl;
}