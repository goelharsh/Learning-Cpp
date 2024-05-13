#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int i,n,sum=0;

    cout<<"Enter the number";
    cin>>n;

    for(i=1;i<=n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
    if(2*n==sum){
        cout<<"It is a perfect number";
    }
}