#include<iostream>
using namespace std;

int main(){
    int n=8,A[8],max;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }   
    max=A[0];
    for(int i=0;i<8;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    cout<<"Max number is "<<max;

}