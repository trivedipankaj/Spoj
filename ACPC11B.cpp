#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int n,m;
       scanf("%d",&n);
       int *a = (int *) malloc(sizeof(int)*n);
       for(int i=0; i<n; i++) scanf("%d",&a[i]);
       scanf("%d",&m);
       int *b = (int *) malloc(sizeof(int)*m);
       for(int i=0; i<m;i++) scanf("%d",&b[i]);
       int diff = abs(a[0]-b[0]);
       for(int i=0; i<n; i++){
          for(int j=0; j<m;j++)
          {
            if (diff > abs(a[i] - b[j]))
                diff = abs(a[i]-b[j]);
          }
       }
       printf("%d\n",diff);
    }
}
