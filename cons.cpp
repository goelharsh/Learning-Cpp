#include<iostream>
using namespace std;

class interest{
    int p,r,t,amount;
    public:
        void display();
        interest(int pr, int ra, int ti=5){
            p=pr;
            r=ra;
            t=ti;
        }

        void compute();
};

void interest :: compute(){
    
    amount=(p*r*t)/100;
}

void interest :: display(){
    cout<<"Printciple = "<<p<<endl;
    cout<<"Rate = "<<r<<endl;
    cout<<"time = "<<t<<endl;
    cout<<"Amount is "<<amount<<endl; 
    
}

int main(){
    interest c1(1500,100);
    interest(1500,10,2);
    c1.compute();
    c1.display();
}