// #include<iostream>
// using namespace std;

// int main(){
//     int i, j,n=5;
//     for(int i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if(i>=j)
//             cout<<"* ";
//         }
//         cout<<endl;
//     }   
// }




#include<iostream>
using namespace std;

int main(){
    int i, j,n=5;
    for(int i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j>n-1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }   
}