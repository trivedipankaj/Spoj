#include<iostream>
using namespace std;

int reverse(int a){
    int result =0;
    while(a){
             result = (result*10) + a%10;
             a= a/10;
             }
    return result;             
}
main(){
       int n;
       cin>>n;
       while(n--){
                  int a,b,c;
                  cin>>a>>b;
                  a  = reverse(a);
                  b  = reverse(b);
                  c  = a + b;
                  c  = reverse(c);
                  cout<<c<<endl;
                  }
      // system("pause");
       }


