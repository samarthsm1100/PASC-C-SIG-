#include<iostream>
using namespace std;
int main(){
// ------------- SWITCH-CASE -------------
    char choice;
    int a,b;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    cout<<"Enter operation:"<<endl;
    cout<<"1. +"<<endl;
    cout<<"2. -"<<endl;
    cout<<"3. *"<<endl;
    cout<<"4. /"<<endl;
    cin>>choice;
    switch(choice){
        case '+':{
            cout<<(a+b)<<endl;
            // break;
            }
        case '*':
            cout<<(a*b)<<endl;
            break;
        case '-':
            cout<<(a-b)<<endl;
            break;
        case '/':
            cout<<(a/b)<<endl;
            break;
        default:
            cout<<"Invalid input!!"<<endl;
    }
    return 0;
}