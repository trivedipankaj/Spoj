#include<iostream>
#include<map>
using namespace std;
map<long long ,long long> dp;

long long solve(long long n)
{
   if(n == 0) return 0;
   if(dp[n] !=0) return dp[n];
   long long number = solve(n/2) + solve(n/3) + solve(n/4);
   if(number > n) dp[n] = number;
   else dp[n] = n;
   return dp[n]; 
}

main()
{
long long n;
while( cin >>n )
{
  cout<<solve(n)<<endl;
}
}

