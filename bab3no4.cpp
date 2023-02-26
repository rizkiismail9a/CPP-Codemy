#include <iostream>
#include <cmath>
using namespace std;


int main(){
    float a, b, c;
    cout<<"Masukkan nilai a: "; cin>>a;
    cout<<"Masukkan nilai b: "; cin>>b;
    cout<<"Masukkan nilai c: "; cin>>c;

    float D;
    D = (pow(b, 2)-(4*a*c));
    float x1, x2;
    x1 = (-b + sqrt(D))/2*a;
    x2 = (-b - sqrt(D))/2*a;
    
    if(x1 != x2 && D >= 0){
        cout<<"Akar-akar dari persamaan kuadrat ada 2, yaitu "<<x1<<" dan "<<x2;
    }
    else if(x1 == x2 && D >= 0) {
        cout<<"Akar-akar dari persamaan kuadrat hanya 1, yaitu "<<x1;
    }
    else{
        cout<<"Akar-akar dari persamaan kuadrat tidak memiliki solusi.";}
    return 0;
}