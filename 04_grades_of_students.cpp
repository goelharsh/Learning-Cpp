#include<iostream>
using namespace std;

int main(){
    int m1,m2,m3,m4;
    cout<<"Enter the marks of the students";
    cin>>m1>>m2>>m3>>m4;

    float avg=(m1+m2+m3+m4)/4;
    if(avg>60){
        cout<<"Grade A";
    }
    else if(avg>90){
        cout<<"Grade Exceelent A++";
    }
    else{
        cout<<"Poor";
    }


}