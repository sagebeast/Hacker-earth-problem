#include <iostream>

using namespace std;
int rotatebyone(int arr[],int n);
int rotatebyone(int arr[],int n)
{
    int temp , i;
    temp=arr[n-1];
    for(i=n-1; i>0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7},i;
    int n= sizeof(arr)/sizeof(arr[0]);


     cout << "Given array is \n";
    for (int i = 0; i < n; i++)
        cout << arr[i];

     rotatebyone(arr,n);

    cout << "\nRotated array is\n";
    for (int i = 0; i < n; i++)
        cout << arr[i];

    return 0;
}
