#include<iostream>
using namespace std;

int main(){
    int i,n=5,A[5],sum=0;
    cout<<"Enter the numbers";
    for(i=0;i<n;i++){
        cin>>A[i];

    }

    for(i=0;i<n;i++){
        sum=sum+A[i];
    }
    cout<<sum;

}