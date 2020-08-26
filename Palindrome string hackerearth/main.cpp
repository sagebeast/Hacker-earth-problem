#include <iostream>
#include<cstring>

using namespace std;

int main()
{
int i , j , flag=0;
char str[101];
cout<<"enter a string";
cin>>str;
 int n=strlen(str);
 for( j=n-1,i=0; j>=0,i<n-1; j--,i++){
    if(str[i]!=str[j]){
   flag=1;
    break;
    }
 }
    if(flag==1){
    cout<<"not a palin"<<endl;
    }

 else{
    cout<<"palin";
 }

    return 0;
}
