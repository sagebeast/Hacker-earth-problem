#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int x=0, y=0,i,j;
	char S[200];
	cin>>S;
int	l=strlen(S);
cout<<"len is"<<l<<endl;
for(i=0;i<=strlen(S)-1; i++){
 if(S[i]=='L'){
   x--;
   }
   else if(S[i]=='R'){
	   x++;
   }

 else if(S[j]=='U'){
   y++;
   }
   else if(S[j]=='D'){
	   y--;
   }

}

cout<<x<<" "<<y;






	return 0;
}
