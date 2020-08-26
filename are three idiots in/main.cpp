#include <iostream>

using namespace std;

int main()
{
   int n,T,flag=0,mid;
   cin>>T;
   while(T--){
   cin>>n;
   int A[n];
   for(int i=0;i<n;i++){
    cin>>A[i];
   }

   for(int i=0;i<n;i++){
         mid=(A[i]+A[i+2] )/ 2;
               if(mid==A[i+1])
                  flag=1;
                    break;


}

 if(flag==1){
cout<<"True"<<endl;
   }
else{
    cout<<"False"<<endl;
}

   }





    return 0;
}
