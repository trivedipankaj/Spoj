#include<iostream>
#include<string>
#include<queue>

using namespace std;
int indeg[26],outdeg[26],color[26];
int found[26];
int g[26][26];

bool isConnected()
{
  queue<int> q;
  int i,j;
  for(i=0;i<26;i++){
     color[i] = found[i]? 0:2;
  } 
  for(i=0; i<26; i++)
  {
    if(!color[i]) break;
  }
  color[i] =1;
  q.push(i);
  while(!q.empty())
  {
     i = q.front(); q.pop();
     for(j=0; j<26; j++)
     {
         if((g[i][j] || g[j][i]) && !color[j]) {  q.push(j); color[j]=1;}
     }
     color[i]=2;
  }
  for(i=0; i<26;i++) 
  {
     if(color[i] !=2) return false;
  }
  return true;
}

bool isEulerPath()
{
  if(!isConnected()) return false;
  int i,cnt1,cnt2;
  for(i=cnt1=cnt2=0; i<26; i++) {
		if(outdeg[i]-indeg[i]==1) cnt1++;
		else if(indeg[i]-outdeg[i]==1) cnt2++;
		else if(indeg[i]!=outdeg[i]) return false;
	}
	if(cnt1+cnt2==0 || (cnt1==1 && cnt2==1)) return true;
	return false;
}



main()
{
int t;
scanf("%d",&t);
while(t--)
{
    int n;
    scanf("%d",&n);
    string s;
    int v,u;
    memset(indeg,0,sizeof indeg);
    memset(outdeg,0,sizeof outdeg);
    memset(g,0,sizeof g);
    memset(found,0,sizeof found);
    for(int i=0; i<n;i++)
    {
       cin>>s;
       int len = s.length();
       u = s[0]-'a';
       v = s[len-1]-'a';
       outdeg[u]++;
       indeg[v]++;
       g[u][v]=1;
       found[u]=1; found[v]=1;
       
    }
   
    if(isEulerPath())
       cout<<"Ordering is possible."<<endl;
      else
       cout<<"The door cannot be opened."<<endl;      
}
}

