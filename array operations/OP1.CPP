#include <iostream>
#include<stdlib.h>

using namespace std;

struct Array{
int *A;
int size;
int length;
};


int main()
{
struct Array arr;
int n;
cout<<"Enter size of an array";
cin>>arr.size;
arr.A=new int[n];
arr.length=0;
cout<<"enter how many numbers";
cin>>n;
   for(int i=0; i<n; i++){
        cin>>arr.A[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr.A[i]<<endl;
    }
arr.length=n;

return 0;
};
