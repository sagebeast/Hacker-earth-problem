#include <bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
int main(){
	int t ,lena,lenb ,count=0;
	char a[10000],b[10000];
	cin>>t;
	cin>>a;
	cin>>b;
	lena = 0;

	for(int j=0; b[j]!='\0';j++)
	lenb++;

	for(int k=0; k<t; k++)
	{

	 for(int i=0; a[i]!='\0'; i++)
		 lena++;

			for(int j=0; b[j]!='\0';j++)
			{
				int i;
				if(a[i]==b[j])
				{
					b[j]='*';
					count++;
					break;
				}
			}


	}
	cout<<lena+lenb-count*2;

return 0;
}
