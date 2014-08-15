#include<iostream>
#include<math.h>
using namespace std;

typedef unsigned int uint;
typedef long long ull;
main(){
       int n; cin>>n;
       while(n--){
                  ull p,c,sum=0; 
                  cin>>p;
                  for(ull i=0; i<p;i++){
                        cin>>c; 
                        sum = (sum+c)%p;
                                              
                  }
                  if(sum ==0){
                             cout<<"YES\n";           
                  }else{
                        cout<<"NO\n";
                        }
                        
       }
       
       }

