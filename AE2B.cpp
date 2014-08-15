#include<iostream>
#include<math.h>
using namespace std;
typedef long long LL;

LL gcd(LL a, LL b){
     if(b>a) return gcd(b,a);
     if(b==0) return a;
     return gcd(b,a%b);
       
   }

main(){
       int t; scanf("%d",&t);
       while(t--){
       LL k,n,x1,y1,x2,y2,g,dx,dy;
       scanf("%lld %lld %lld %lld %lld %lld",&k,&n,&x1,&y1,&x2,&y2);
       g   = gcd(k,n);
       dx   = abs(x2-x1);
       dy   = abs(y2-y1);
       if(g>1){
               if(dx%g || dy%g) {
                       printf("NIE\n"); continue;
               }
               k = k/g; 
               n  = n/g;
               dx = dx/g;
               dy = dy/g;
               
       }
       //cout<<k<<" "<<n<<endl;
       if((k%2 == 0 )|| (n%2 ==0)){
              printf("TAK\n");       
       }else if(((dx%2) + (dy%2)) ==1) printf("NIE\n");
       else printf("TAK\n");
             
       }
       //system("pause");
       }

