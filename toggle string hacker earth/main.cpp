#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char str[100];

	cin>>str;
	for(int i=0; str[i]!='\0';i++){
		if(str[i]>=97 && str[i]<=122){
			str[i]=str[i]-32;
		}
		else{

			str[i]=str[i]+32;
		}
	}
cout<<"UPDATED STRING IS "<<str;




	return 0;
}
