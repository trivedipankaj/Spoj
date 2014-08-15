#include<iostream>
using namespace std;

main(){
       int n;
       cin>>n;
       while(n--){
                  int p,r;
                  cin>>p>>r;
                  int rank[r];
                  int it[r];
                  int time[r];
                  for(int i=0; i<r;i++){
                          cin>>rank[i];
                          it[i] =1;
                          time[i] = 0;
                  }
                  int min=0,temp,curr_c=0,maxi;
                  int curr=0; 
                  //time = rank[0]* it[0];
                  
                  
                  for(int k=0; k<p; k++){
                          min   = time[0] +rank[0] * it[0];
                          curr_c = 0;
                          for(int i=0; i<r;i++){
                              if(min > time[i]+rank[i]*it[i]){
                                min = time[i] + rank[i]*it[i];
                                curr_c = i;
                                
                              }          
                          }
                          
                          time[curr_c] += rank[curr_c]*it[curr_c];
                          it[curr_c]++;        
                                     
                  }
                   maxi= time[0];     
                  for(int i=0; i< r; i++){
                     if(time[i] > maxi)
                       maxi  = time[i];
                  }
                  cout<<maxi<<endl;
       }
       }


