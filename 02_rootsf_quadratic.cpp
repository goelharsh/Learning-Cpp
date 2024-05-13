#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float a,b,c,d,r1,r2;
    cout<<"Enter the values of a,b and c";
    cin>>a>>b>>c;

    d=(b*b)-4*a*c;

    r1=(-b+ sqrt(d))/(2*a);
    r2=(-b- sqrt(d))/(2*a);

    if(r1==r2){
        cout<<"Roots are "<<r1<<" "<<r2<<endl;
        cout<<"Roots are real and equal";
    }
    else if(r1!=r2){
        cout<<"Roots are "<<r1<<" "<<r2<<endl;
        cout<<"Roots are real and unequal";
    }
    else
    cout<<"Imaginary";
    
}