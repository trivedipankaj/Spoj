#include<iostream>

using namespace std;
main(){
       int a,b,c,n;
       
       while( scanf("%d%d%d",&a,&b,&c) && (a || b || c )){
        if( b-a == c-b){
              n = c + (c-b);
              printf("%s %d\n","AP",n);  
        }else{
              n = c*(c/b);
               printf("%s %d\n","GP",n);
              }      
       }
}


