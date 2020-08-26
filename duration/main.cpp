#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int N,SH,SM,EH,EM,i,mm,hh,DIFF;

	cin>>N;
	for(i=1;i<=N;i++){
		cin>>SH;

		cin>>SM;

		cin>>EH;

		cin>>EM;
		DIFF = ((EH*60+EM)-(SH*60+SM));
	    hh=DIFF/60;
	    mm=DIFF%60;
		cout<<hh<<" "<<mm;
		cout<<endl;

	}






	return 0;
}
