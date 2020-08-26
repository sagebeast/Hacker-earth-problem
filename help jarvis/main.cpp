// Write your code here
#include<iostream>
using namespace std;
int main(){
int t,n,A[1000000],temp,flag=0;
cin>>t;

while(t--){
	cin>>n;
for(int i=0; i<n; i++){
	cin>>A[i];
}

for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(A[i]>A[j])
			{
				temp  =A[i];
				A[i]=A[j];
				A[j]=temp;
			}
		}
	}
for(int i=0; i<n; i++)
   {
      if(A[i+1]-A[i]==1)
       flag=1;
      else{ flag=0;break;}
}
if(flag==0)
   cout<<"NO"<<endl;
if(flag==1)
   cout<<"YES"<<endl;

}




	return 0;
}
