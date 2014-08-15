#include<iostream>

using namespace std;
typedef long long LL;
#define SIZE 1000000
LL num_primes;
LL primes[SIZE+1];

void init(){
     static int isprime[SIZE+1];
     for(LL i=2; i<=SIZE;i++) isprime[i] =1;
     for(LL i=2; i<=SIZE; i++){
            if(isprime[i] ==1){
                for(LL j=2*i; j<=SIZE; j+=i)
                           isprime[j] =0;        
               }
            }
     num_primes =0;
     for(LL i=2; i<=SIZE; i++) 
        if(isprime[i]) primes[num_primes++] = i;
}

int is_sum(LL n){
    LL p,exp;
    for(p=0; p<num_primes;p++){
          if(primes[p]*primes[p] >n) break;
          exp =0;
          while(n%primes[p] == 0ll){
                 exp++;
                 n= n/primes[p];                  
          }                
       if(primes[p]%4ll == 3ll && exp%2 !=0) return 0;    
    }
    if(n%4ll ==3ll) return 0;
    return 1;
}

main(){
       int t; LL n;  init(); 
       scanf("%d",&t);
       while(t--){
                  scanf("%lld",&n);
                  if(is_sum(n))
                    printf("Yes\n");
                  else
                    printf("No\n");
                  }
       }

