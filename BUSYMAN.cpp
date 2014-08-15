#include<iostream>
#include<algorithm>
using namespace std;

struct activity{
       int start;
       int end;

};

bool comp(activity a, activity b)
{
     if(a.end == b.end)
        return a.start < b.start;
     else
        return a.end < b.end;
}

main()
{
   int t, n;
   scanf("%d",&t);
   while(t--)
   {
     scanf("%d",&n);
     activity *a = (activity *) malloc(sizeof(activity)*n);
     for(int i=0; i<n;i++)
     {
      scanf("%d%d",&a[i].start,&a[i].end);
     }
     sort(a,a+n,comp);
     int cnt=1;
     int finish = a[0].end;
     for(int i=0; i<n;i++)
     {
        if(a[i].start >= finish)
        {
         cnt++;
         finish = a[i].end;
        }
     }
     printf("%d\n",cnt);
       
   }
}

