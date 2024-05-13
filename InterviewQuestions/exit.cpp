// #include<iostream>
// using namespace std;

// int main(){
    
//     while(1){
//         cout<< "harsh";
//         switch(1){
//             case 1: cout<<"2";
//             break;
//         }
//         exit(0);
//     }
//     return 0;
// }







// #include<iostream>
// using namespace std;

// int main(){
    
//     while(1){
//         cout<< "harsh";
//         switch(1){
//             case 1: cout<<"2";
//             break;
//             continue;

//             case 2: cout<<"goelsahab";

//         }
//         exit(0);
//     }
//     return 0;
// }



#include<iostream>
using namespace std;

int main(){
 
    int a,b;
    cin>>a;
    cin>>b;
    char ch;
    cin>>ch;
    switch(ch){
        case '*': cout<< a*b <<endl;
                break;
        case '+': cout<< a+b <<endl;
                break;
        case '-': cout<< a-b <<endl;
                break;
    }


}