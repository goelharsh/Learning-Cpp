#include<iostream>
using namespace std;

int main(){
    int i, n=5, key;
    int A[5];
    for(i=0;i<n;i++){
        cin>>A[i];
    }

    cout<<"Enter key";
    cin>>key;

    for(i=0;i<n;i++){
    
        if(A[i]==key)
         cout<<"Key found at "<<i;
    }
    cout<<"KEy not found";
        
    
}
