#include<iostream>
#include<math.h>
using namespace std;

main(){
       double a,b,c,d,s;
       int t; scanf("%d",&t);
       while(t--){
       scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
       s = 0.5*(a+b+c+d);
       printf("%lf\n",sqrt((s-a)*(s-b)*(s-c)*(s-d)));     
       }
}

