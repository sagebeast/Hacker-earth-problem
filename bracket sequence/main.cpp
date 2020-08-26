#include<iostream>
#include<cstring>
using namespace std;
int main(){
int count1=0,count2=0;
std::string str;
cin>>str;
for(int i=1; i<=sizeof(str); i++){
if(str[i]=='('){
	count1++;
}
else{
	count2++;
}
}
 if(count1==count2){
	cout<<count1;
}
else if(count1>count2){
	cout<<count2;
}
else if(count1-count2==count1==count2){
	cout<<'0';
}
else
cout<<count1;

return 0;
}
