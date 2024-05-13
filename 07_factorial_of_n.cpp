#include<iostream>
using namespace std;

int main(){
    int fact=1, i, n;   // most important is that in factorial case we have to mark fact as 1;

    cout<<"Enter the number";
    cin>>n;

    for(i=1;i<=n;i++){
        fact=fact*i;
    } 
    cout<<"Factorial of "<<n<<"is "<<fact<<endl;
}