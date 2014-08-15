#include<iostream>
using namespace std;

int max( int a , int b) {
     return (a>b) ? a:b;
    }
    
main(){
       int t,h,w,h1,h2,l1,l2,t1,t2; 
       
       scanf("%d",&t);scanf("%d%d",&h,&w);
       h1= h;l1=w;
       h2= w; l2=h;
       while(--t){
                  scanf("%d%d",&h,&w);
                  t1=  max(l1+abs(h1-h)+w,l2+abs(h2-h)+w);
                  t2 = max(l1+abs(h1-w)+h,l2+abs(h2-w)+h);
                  l1= t1; h1 = h;
                  l2= t2; h2 = w;
                  //cout<<l1<<" "<<l2<<endl;
                  }
                printf("%d\n",max(l1,l2));  
               // system("pause");
       }

