#include<iostream>
using namespace std;

main(){
       int c;
       while(cin>>c && c!=-1){
                    int a[c]; long long sum=0; int result=0,  fact;
                    for(int i=0; i<c;i++){
                          cin>>a[i];
                          sum += a[i];  
                    }
                    if(sum%c !=0){
                             result = -1;         
                    }else{
                          fact = sum/c;
                          for(int i=0; i<c; i++){
                                  result += abs(fact-a[i]);             
                          }
                          result = result/2;
                    }
                    cout<<result<<endl;
       }
}

