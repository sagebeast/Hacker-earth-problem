#include <iostream>

using namespace std;

int main(){
 int i,j ,N,T;
 cin>>T;
 while(T--){
  cin>>N;
    for(i=1; i<=N;i++)
{
	for(j=1;j<=N*2; j++){

		if(j>=i+1 &&j<=N*2-i )
			cout<<"#";

		else
			cout<<"*";



	}
	cout<<endl;
}
 }

    return 0;
}
