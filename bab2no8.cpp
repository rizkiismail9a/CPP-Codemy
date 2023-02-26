#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a, f;
    cout<<"Masukkan angka ke-1: "; cin>>a;
    cout<<"Masukkan angka ke-6: "; cin>>f;
    
    float b, c, d, e;
    b = (f-(3*a))/5;
    c = a+b;
    d = b+c;
    e = d+c;
    cout<<"Enam bilangan pertama adalah: "<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f;

    return 0;


}