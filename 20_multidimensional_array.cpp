#include<iostream>
using namespace std;

int main(){
    int A[3][3];
    int i, j;
    cout<<"Enter the array ";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>A[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}