    #include<iostream>
    
    #define MAX 1000000
    using namespace std;
    
    main()
    {
     int *a;
     a = (int*) malloc(MAX*sizeof(int));
     int cnt[10];
     int t; int n;
     scanf("%d",&t);
     while(t--)
     {
       scanf("%d",&n);
       for(int i=0; i<n;i++)
       {
        scanf("%d",&a[i]);
       }
       int temp=-1;
       for(int i=0; i<10;i++) cnt[i] =0;
       for(int i=n-1; i>0; i--)
       {
         cnt[a[i]]++;
         if(a[i] > a[i-1])
         {
          
          temp = i-1;
          for(int j=a[temp]+1; j<10;j++) { 
                  if(cnt[j]) {
                             cnt[a[temp]]++;
                             a[temp] = j; cnt[j]--; 
                             break;
                             }
                             }
          
          for(int k=temp+1; k<n;k++){
                  for(int j=0; j<10;j++)
                  {
                    while(cnt[j]){
                             a[k++] = j; cnt[j]--;
                    }
                  }
          } 
          break;
         }
       }
      
       
       if(temp ==-1){ 
         cout<<temp<<endl;
         }
       else{
            for(int i=0; i<n; i++)
            {
                    cout<<a[i];
            }
            cout<<endl;
       }
          
     }
    }

