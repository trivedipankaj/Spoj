#include<iostream>
#include<vector>
#include<algorithm>
#include <cstdio>
using namespace std;

main(){
       int c; scanf("%d",&c);
       while(c--){
                  int n,m;
                  scanf("%d %d",&n,&m);
                  int g[n],mg[m];
                  for(int i=0; i<n;i++) scanf("%d",&g[i]);
                  for(int i=0; i<m;i++) scanf("%d",&mg[i]);
                  sort(g,g+n); sort(mg,mg+m);
                  int i=0,j=0;
                  while( i<n && j<m){
                         if(g[i] < mg[j])
                             i++;
                         else if(g[i] >= mg[j])
                             j++; 
                              
                  }
                  if(i==n) 
                    cout<<"MechaGodzilla\n";
                  else
                    cout<<"Godzilla\n";
                  }
       }

