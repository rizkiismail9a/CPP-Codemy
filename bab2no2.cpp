#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int angka;
    cout<< "Masukkan bilangan: ";
    cin>>angka;
    int a, b, c, d, e;
    a = (angka / 10000);
    b = ((angka / 1000)%10);
    c = ((angka / 100)%10);
    d = ((angka / 10)%10);
    e = (angka % 10);
    
    cout<<(a*b*c*d*e)<<endl;
    return 0;
}