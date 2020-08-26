#include<iostream>
using namespace std;
void reversearray(int ,int,int);
void splitarray(int ,int,int );
void printarray(int ,int );



void reversearray(int A[],int s, int e){
while(s<e){
        int temp;
        temp=A[s];
        A[s]=A[e];
        A[e]=temp;
        s++;
        e--;
    }
}
void printarray(int A[],int n){
for(int i=0;i<n; i++)
    cout<<A[i]<<"  ";
}


void splitarray(int A[],int k,int n)
{
 reversearray( A , 0 , n-1);
 reversearray( A, 0, n-k-1);
 reversearray( A, n-k , n-1);

}






int main(){
    int A[]={12,10,5,6,52,36};
    int n=sizeof(A)/sizeof(A[0]);
    int k=3;
    splitarray(A,k,n);
    printarray(A,n);

return 0;
}
