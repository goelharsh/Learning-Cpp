#include<iostream>
using namespace std;

int main(){
    int A[10];
    int i, n=10, key,mid, l=0,h=9;

    cout<<"Enter the numbers of array"<<endl;
    for(i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"Enter key";
    cin>>key;
    while(l<=h){
        mid=(l+h)/2;
        if(key==A[mid]){
        cout<<"Key found at "<<mid;
        }
        else if(key<A[mid]){
        h=mid-1;
    }
        else if(key>A[mid]){
        l=mid+1;
        }
    }
    if(l>h)
    cout<<"Key not found";
}