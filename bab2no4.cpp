#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double hargaAwal;
    cout<<"Harga sebelum diskon: ";
    cin>>hargaAwal;

    double diskon;
    cout<<"Besar diskon: ";
    cin>>diskon;

    double hargaAkhir;
    hargaAkhir = (hargaAwal*((100.0-diskon))/100.0);
    cout<<"Harga setelah diskon: "<<hargaAkhir;
    return 0;
}