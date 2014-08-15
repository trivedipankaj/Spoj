#include<iostream>
using namespace std;

main(){
       int n; cin>>n;
       while(n--){
                  int x,y,z;
                  cin>>x>>y;
                  
                  if( x!=y && x-y !=2){
                      cout<<"No Number"<<endl; continue;
                  }
                  if(x%2==0)
                    z= x+y;
                  else if(x%2 !=0)
                     z= x+y-1;
                  cout<<z<<endl;     
       }
       
       }

