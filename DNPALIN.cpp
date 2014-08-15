#include<iostream>
using namespace std;

int is_near_palin(char *s, int l){
    int i,j,m=0;
    
    for( i=0, j=l-1; i<j; i++,j--){
            if(s[i] != s[j]) m++;
    }
    if(m==1) return 1;
    if(m==0 && (i==j)) return 1;
    return 0;
}
main(){
       char w[256];
       int i,len;
       while(scanf("%s",w) == 1){
            if(!strcmp(w,"*END*")) break;
            len  = strlen(w);
            for(i=0; i<len; i++){
                     if(is_near_palin(w,i) && is_near_palin(w+i,len-i)) break;         
            }
            if(i==len)
              printf("%s is not a double near palindrome.\n",w);
            else
              printf("%s is a double near palindrome.\n",w);                                           
       }
}

