#include<iostream>
using namespace std;

int main(){
    int n,r,rev=0;

    cout<<"Enter the number";
    cin>>n;
    
    while(n>0){
        r=n%10;
        n=n/10;
        cout<<r<<endl;
    }
    rev==r;

    if(rev==n){
        cout<<"No is palindrome";
    }
    else
    cout<<"Not a Palindrome";
    
    
}
