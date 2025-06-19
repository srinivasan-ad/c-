//My first dp fibonacci series
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace  std;

int fibonacci(int n)
{
    vector<int>dp(n+1);
    if(n <= 1 )return n;
    dp[0] = 0;
    dp[1] = 1;
for(int i = 2 ; i <= n ; i++)
{
dp[i] = dp[i-1] + dp[i-2];
}
return dp[n];
}
int main()
{
    int res = fibonacci(10);
    cout << "result is : " << res <<endl;
}
