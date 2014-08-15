#include<iostream>
#include<vector>
#include<cstdio>
#define MAX 31622
using namespace std;

bool prime[31622];
vector<int> prime_set;

main(){
       memset(prime,true,sizeof(prime));
       prime[0]                   =false;
       prime[1]                   = false;
    
    for(int i=2;i<MAX;i++){
        if(prime[i]){
            prime_set.push_back(i);
            
            for(int j=2;j*i<MAX;j++) prime[i*j]=false;
        }
    }
    
    int t,m,n;
    int prime2[100001];
    
    scanf("%d",&t);
    
    for(int i=0; i<t;i++){
        scanf("%d %d",&m,&n);
        
        if(i!=0) printf("\n");
        
        fill(prime2,prime2+n-m+1,true);
        
        if(m==1) prime2[0]=false;
        
        for(int j=0;j<prime_set.size();j++)
            for(int k=(m+prime_set[j]-1)/prime_set[j]*prime_set[j];k<=n;k+=prime_set[j])
                if(k!=prime_set[j]) prime2[k-m]=false;
        
        for(int j=m;j<=n;j++)
            if(prime2[j-m]) printf("%d\n",j);
    }
    
    return 0;
}


