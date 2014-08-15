#include<iostream>
using namespace std;
main(){
int t; cin>>t;
while(t--){
	unsigned long long n;
	unsigned long long pow=1;
	unsigned long long i=0;
        cin>>n;
	if(n==1){cout<<"1 0\n"; continue; }
	unsigned long long cand=0,times=0;
        for( i=2; i<n; i=i*2){
		pow++;
	}
        if(i==n){
          times =0;
        }else{
        for(unsigned long long j=i; j>0 ;j=j/2){
	 	//cout<<"j="<<j<<endl;
		if( cand!=n){
		 // cout<<cand<<endl;	
		  if(cand+j <=n)
			cand +=j;
		  times++;
		}
	}
	times--; 
	}	
        cout<<i<<" "<<times<<endl;

}
	
}

