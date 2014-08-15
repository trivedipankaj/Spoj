#include<iostream>
#include<string>
using namespace std;
int dp[2001][2001];
int minimum(int x, int y, int z)
{
    return min(min(x,y),z);
}

main(){
int cases;
cin>>cases;
while(cases--)
{
   string a,b;
   cin>>a>>b;
   int m = a.length();
   int n = b.length();
   for(int i=0; i<=m;i++) dp[i][0] = i;
   for(int j=0; j<=n;j++) dp[0][j] = j;

   for(int i=1; i<=m;i++)
   {
     for(int j=1; j<=n;j++)
        {
            if(a[i-1] == b[j-1])  dp[i][j] = dp[i-1][j-1];
            else
            {
                dp[i][j] = minimum(dp[i-1][j-1],dp[i][j-1],dp[i-1][j])+1;
            }
        }
   }
 cout<<dp[m][n]<<endl;
}
}
