#include<iostream>
using namespace std;

main(){
       int n; cin>>n;
       while(n--){
                  int a,j=0; char p,q; char map[100];  bool flag = true;
                  for(int i=1 ; i<=99; i++){
                          cin>>a>>p;
                          if(a%9 ==0 && a<=81)
                           map[j++] = p;
                  }
                  q = map[0];
                    for(int i=1; i<j; i++){      
                         if(map[i] != q)
                           flag= false;
                    }                  
                  if(flag)
                    cout<<"YES\n";
                  else 
                    cout<<"NO\n";
                  }
       
       }

