#include<iostream>
#include<map>
#include<cstdio>
#include<string>
using namespace std;
map<string, int> m;
char account[64];
main(){
       int c; scanf("%d",&c); 
       while(c--){
                  int n; scanf("%d\n",&n);
                  m.clear();
                  for(int i=0; i<n; i++){
                       fgets(account,64,stdin);
                       account[32] =0;
                       ++m[account];
                          
                  }
                  map<string,int>::iterator it;
                  for(it = m.begin(); it !=m.end(); it++)
                         printf("%s%d\n", it->first.c_str(), it->second);
                  if(c) puts("");                  
                  
       }
}

