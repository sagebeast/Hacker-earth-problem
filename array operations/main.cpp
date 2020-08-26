#include <iostream>

using namespace std;

int main()
{
    //------------------------------------RUN TIME CREATION OF ARRAY--------------------------
    // creating array at run time.....
    int *A,n;
    A=new int[n];
    cout<<"enter value of  n";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
     for(int i=0; i<n; i++){
    cout<<A[i]<<"\n";
     }
//-------------------------RUN TIME CREATION OF ARRAY-------------------------------------------




    return 0;
}
