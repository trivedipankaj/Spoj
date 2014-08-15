#include<iostream>
#include<vector>
#include<string>
#define SIZE 10
using namespace std;
struct node{
     int words;  //number of words till this node
     int prefix;  //number of prefixes in the trie at this node
     vector<node*> links;  //infinite links :P
};

node *newNode(){
     node *nn = new node;
     nn->words  = 0;
     nn->prefix =0;
     nn->links.resize(SIZE,NULL);
     return nn;
}

void insert(const string str, node &t){
     int len  = str.size();
     node *curr = &t;
     for(int i=0 ; i<len;i++){
             if(curr->links[str[i]-'0'] == NULL){
                          curr->links[str[i]-'0'] = newNode();              
             }
             curr  = curr->links[str[i]-'0'];
             curr->prefix++;
     }
     curr->words++;
}

int countPrefix(const string str, node &t){
     int len  = str.size();
     node *curr = &t;
     for(int i=0;i<len;i++){
        if(curr->links[str[i]-'0']==NULL) return 0;
        curr = curr->links[str[i]-'0'];
    }
    
    return curr->prefix;   
}
    
main(){
       char temp[1000001];
       int c; scanf("%d",&c);
       while(c--){
                  int n; scanf("%d",&n); bool flag=true;
                  string phone[n];
                  node *curr = newNode();
                  for(int i=0; i<n; i++){
                     scanf("%s",temp);
                     phone[i] = string(temp);
                  }
                  sort(phone,phone+n);
                  for(int i=n-1; i>=0 && flag; i--){
                          insert(phone[i],*curr);
                          if(countPrefix(phone[i],*curr)>1)
                             flag = false;
                  }
               if(flag) 
                 printf("%s\n","YES");
               else
                printf("%s\n","NO");
       }
       system("pause");
       }

