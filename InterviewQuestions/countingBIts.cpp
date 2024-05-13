#include<iostream>
using namespace std;

int countA(int a){
    int count=0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a=a>>1;
    }
    return count;
}

int countB(int b){
    int count=0;
    while(b!=0){
        if(b&1){
            count++;
        }
        b=b>>1;
    }
    return count;
}


int main(){
    int a, b;
    cin>>a;
    cin>>b;

    int res1 = countA(a);
    int res2 = countB(b);
    cout<< res1+res2;
}