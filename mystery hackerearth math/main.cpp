#include<iostream>
using namespace std;
int main(){
	int T,N,i,count=0;
	cin>>T;
	while(T--){
		cin>>N;
      for(i=1; i<=N; i++){
		  if(N%i==0)
	        count++;

	  }
  cout<<count<<endl;

	}
	return 0;
}
