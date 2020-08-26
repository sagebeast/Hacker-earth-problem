#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int A[n];
    int d;
    cin>>d;
for(int i=0; i<n; i++){
    cin>>A[i];
}
 d=d%n;
for(int i=d;i<n;i++){
    cout<<A[i]<<" ";
}
for(int i=0; i<d; i++){
    cout<<A[i]<<" ";
}




    return 0;
}
