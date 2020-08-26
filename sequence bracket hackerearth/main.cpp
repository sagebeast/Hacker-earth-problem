#include<iostream>
#include<cstring>
using namespace std;
int main(){
char str[500000];
int l,count=0;
cin>>str;
l=strlen(str);
for(int i=1; i<=l;i++)
{
	if(str[i]=="40"|| (str[i]=="40"&&str[i]=="41"))
	{
		count++;
	}

}
cout<<count;
return 0;
}
