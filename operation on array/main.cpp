#include <iostream>

using namespace std;
void display(struct Array *arr );
void display(struct Array *arr )
{
    int i;
    cout<<"elements are as follow";
    for(i=0;i<arr.length; i++)
    {
        cout<<arr.A[i];
    }
}
struct Array{
int *A;
int size;
int length;


};

int main()
{
struct Array arr;
int n,i;
cout<<"Enter size of array";
cin>>&arr.size;
arr.A=new int[arr.size*sizeof(int)];
arr.length=0;
cout<<"enter how many numbers";
cin>>n;
cout<<"enter all elements";
for(i=0;i<n; i++)
{
    cout<<arr.A[i]<<endl;
}
arr.length=n;
display(arr);
    return 0;
}
