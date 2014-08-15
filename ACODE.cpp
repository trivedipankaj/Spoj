#include<iostream>
#include<string>
#define MAX 5001
using namespace std;

main()
{
string s;
while(getline(cin,s) && s[0]-'0' != 0)
{
 int dp[MAX];
 for(int i=0; i<MAX;i++) dp[i] =0;
 dp[0]=1;
 for(int i=1; i<s.length(); i++)
 {
   if(s[i]-'0')
    dp[i] = dp[i-1];
   if( (s[i-1]-'0')*10 + (s[i]-'0') <= 26 && (s[i-1]-'0')*10 + (s[i]-'0') >9 ) {
       dp[i] += dp[(i-2) < 0 ? 0 : (i-2)];
   }
 
 }
 cout<<dp[s.length()-1]<<endl;
}
}

