#include<iostream>
using namespace std;
#define SIZE 10000000
typedef  long long ULL;
unsigned char prime[SIZE+1];

ULL j;

/*void print(){
     for(int i=1; i<=SIZE; i++){
             if(!(prime[i]&2)){
             cout<<i<<"=>"<<prime[i]<<endl;}
             }
     }*/
 bool isDigit(ULL num, int d){
         int temp;
         while(num > 0){
              temp = num%10;
              if(temp == d)
                 return true;
              num = num/10;            
         }
         return false;
     }    

void find_primes(){
     prime[1] = 0; //1 is not prime
     for(ULL i=2; i<=SIZE; i++) 
         prime[i] =1; 
     for(ULL i=2; i<=SIZE; i++){
             if(prime[i]&1){
                            prime[i] ^=4;
                            for(j=2*i; j<=SIZE; j+=i){
                                   prime[j]^= 4;
                                   prime[j]&=4;                
                            }
             }        
     }
     for(ULL i=2; (i*i) <= SIZE;i++){
             if(!(prime[i]&2)){
                     for(j= i*i; j<=SIZE; j+=(i*i)){
                            prime[j]|=2;
                            }                        
             }        
     }
              
}
ULL square_free(ULL n){
    ULL d,result=0;
    if(n==1) return 1;
    for(d=1; d*d<=n; d++){
             if(!(prime[d]&2)){
                  if(prime[d]&4) 
                      result -= n/(d*d);
                    else
                      result += n/(d*d);            
                               }
             
             }return result;
    }


main(){
     find_primes();
    // print();
     int t; scanf("%d",&t);
       for(int i=0;i<t;i++){
                  ULL n; scanf("%lld",&n);
                  
                  printf("%lld\n",square_free(n));
       }
     //system("pause");
     }

