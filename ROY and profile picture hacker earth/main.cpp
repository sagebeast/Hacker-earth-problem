#include<iostream>
using namespace std;
int main(){
int L,N,W,H,i;
cin>>L;

cin>>N;
for(i=0; i<N;i++){
	cin>>W;
    cin>>H;

if(W<L || H<L)
{
cout<<"UPLOAD ANOTHER"<<endl;
}

else
{

 if(W==H){
cout<<"ACCEPTED"<<endl;
   }

else{
cout<<"CROP IT"<<endl;
     }
   }



 }

return 0;
}
