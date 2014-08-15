#include<iostream>
using namespace std;

int gcd(int a, int b)
{
  if(b ==0) return a;
  return gcd(b,a%b);
}

main()
{
  int cases;
  int a, b;
  int rel,gc;
  cin>>cases;
  while(cases--)
  {
    cin>>a>>b;
    rel = abs(a-b);
    gc = gcd(abs(a),abs(b));
    cout<<(rel/gc)<<endl;
  }
}

