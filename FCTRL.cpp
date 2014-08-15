#include<iostream>
using namespace std;


main(){
      int n;
      unsigned long long a,result;
      cin>>n;
      
      while(n--){
             cin>>a;
             result =0;
             for(unsigned long long i=5; i<=a; i=i*5){
                          result += a/i;
             }
             cout<<result<<endl;    
      }
       //system("pause");
}


