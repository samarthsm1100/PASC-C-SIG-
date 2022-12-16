#include<iostream>
using namespace std;
int main(){
    // <--------------- Primitive DataTypes ------------------>
    
    int a =10;
    short int m;// 2 bytes
    int b;// 4 bytes
    long int j = 12;//8 bytes
    
    cout<<"a = "<<a<<"\n";
    
    float n;
    double d = 3.242569093456456;// size = 8 bytes
    bool k = true;// 1 bit size.
    k = false;
    
    cout<<"\nsize of k = " << sizeof(k)<<endl;
    
    k = 0;
    n=1e3; // 10 power 3
    char c = 'A';
    
    cout<<"n= "<<n;
    
    return 0;
}