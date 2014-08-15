#include<iostream>
#define INF 10000000
using namespace std;

main()
{
 int t;
 cin>>t;
 while(t--)
 {
   int w[500];
   int p[500];
   long dp[10001];
   int n,temp;
   int wb,wf,wa;
   cin>>wb>>wf;
   cin>>n;
   for(int i=0; i<n;i++)
   {
     cin>>p[i]>>w[i];
   }
   
   wa = wf - wb;
   for(int i=0; i<=wa;i++)
   {
     dp[i] = INF;
   }
   dp[0]=0;
   for(int i=0; i <= wa; i++)
   {
     for(int j=0; j<n; j++){
             if(i-w[j] >= 0){
                dp[i] = min(dp[i],dp[i-w[j]]+p[j]);
             }
             
     }
   }
   if(dp[wa] != INF){
     cout<<"The minimum amount of money in the piggy-bank is "<<dp[wa]<<".";
   }
   else
       cout<<"This is impossible.";
  cout<<endl;     
 }
        
}

