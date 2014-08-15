#include<iostream>
#include<string>
using namespace std;

main(){
	int n;
	char str[200];
        int index;
	int flag =0;
        while(cin>>n && n!=0){
	     cin>>str;
	     int len 		= strlen(str);
             int num_row        = len/n;
		for(int j=0; j<n; j++){
		      	flag =0;
			for(int i=0; i<num_row; i++){
                       
			  index  = i*n+j; 
			 if(flag ==1){
                           index = i*n + (n-1-j);
			   flag =0;	
			}
			else{ 
                           flag =1;
			  }
			cout<<str[index];
			}	
			}	
	     	
                cout<<endl;
	}
}

