#include<iostream>
#include<iomanip>
using namespace std;
main(){
   int c;
   cin>>c;
while(c--){
   long n;
   cin>>n;
   double result,deno;
   
   deno  =  0.5 * (1.0/6 + (1.0/(n+2)) - (1.0/(n+1)));
   result = 2.0/3 + deno;
  cout<<setprecision(11)<<fixed<<result<<endl;	
}
}

