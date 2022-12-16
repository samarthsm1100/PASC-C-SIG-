#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>a>>b;
    int ans1 = 1;
    for(int i = 1;i<=b;i++){
        ans1 = ans1*a;
    }
    cout<<ans1<<endl;

    int c,d;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>c>>d;
    int ans2 = 1;
    for(int i = 1;i<=d;i++){
        ans2 = ans2*c;
    }
    cout<<ans2<<endl;

    int e,f;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>e>>f;
    int ans3 = 1;
    for(int i = 1;i<=f;i++){
        ans3 = ans3*e;
    }
    cout<<ans3<<endl; 
    return 0;
}