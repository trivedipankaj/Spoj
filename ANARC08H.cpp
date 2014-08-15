#include<iostream>
using namespace std;
typedef unsigned long long ULL;
main(){
       ULL n,d,w;
       while(scanf("%llu %llu",&n,&d) && (n || d)){
            w=0;
            for(ULL i=1; i<n;i++){
                    w = (w+d)%(i+1);        
            }
            cout<<n<<" "<<d<<" "<<w+1<<endl;                                     
       }
       
}

