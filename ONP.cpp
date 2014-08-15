#include<iostream>
#include<stack>
#include<string>
#include<map>
using namespace std;

main()
{
map<char,int> m;
m['+'] = 1;
m['-'] = 1;
m['*'] = 3;
m['/'] = 4;
m['^'] = 5;
m['('] = 6;
int cases;
cin>>cases;
while(cases--)
{
  string s;
  stack<char> st;
  char temp;
  cin>>s;
  for(int i=0; i<s.length(); i++)
  {
     if(s[i] >= 'a' && s[i] <='z')
     {
       cout<<s[i];
     }
    else if(s[i] == '(') { st.push(s[i]);}
    else if(s[i] == ')')
     {
       while( st.top() != '(' && !st.empty())
       {
            temp = st.top(); st.pop();
            cout<<temp;
       }
        st.top(); st.pop();
     }
     else{
         while(  !st.empty() && (m[st.top()]  < m[s[i]]))
         {
            temp = st.top(); st.pop();
            cout<<temp;
         }
        st.push(s[i]);
     }
    
  }
  while(!st.empty())
     {
      temp = st.top(); st.pop();
      cout<<temp;
     }
     cout<<endl; 
}
      
}

