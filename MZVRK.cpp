#include<iostream>
using namespace std;
typedef unsigned long long ULL;

ULL w_number(ULL n){
    ULL p=1, result =0,sum=1;
    while(n){
             if(n%2!=0)
                result +=sum;
              sum = sum*2 + p;
              p *=2;  
              n = n/2;  
    }
    return result;
    }
main(){
       ULL a,b; scanf("%llu %llu",&a,&b);
       printf("%llu\n",w_number(b) - w_number(a-1));
       //system("pause");
       
       }

