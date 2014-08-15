#include<iostream>
using namespace std;
typedef unsigned long long ULL;
main(){
       int t; scanf("%d",&t);
       while(t--){
                  ULL n; int p; scanf("%llu%d",&n,&p);
                   if(p==1){
                         printf("Pagfloyd wins.\n");
                   }else{
                         printf("Airborne wins.\n");
                         }
       }
}

