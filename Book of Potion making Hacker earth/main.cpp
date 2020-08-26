#include<iostream>
#include<cstring>
using namespace std;
int main(){
char ISBN[10];
int l,sum=0;
cin>>ISBN;
l=strlen(ISBN);
sum=ISBN[0]*1+ISBN[1]*2+ISBN[2]*3+ISBN[3]*4+ISBN[4]*5+ISBN[5]*6+ISBN[6]*7+ISBN[7]*8+ISBN[8]*9+ISBN[9]*10;

if(sum%11==0){
	cout<<"Legal ISBN";
}
else if(l!=10){
	cout<<"Illegal ISBN";
}
else{
cout<<"Illegal ISBN";
}





	return 0;
}
