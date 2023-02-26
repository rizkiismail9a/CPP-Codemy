/*Tuan Wang ingin menghitung nilai dari akar sebuah angka. Ia membutuhkan nilai tersebut
hingga tiga digit di belakang koma. 
Tentukan nilai dari akar N tanpa funsi matematika apapun*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double N;
    double akar = 0;

    cout<<"Masukkan angka: "; cin>>N;

    while(pow(akar, 2) <  N){
        akar += 0.001;
    }

    cout<<"Hasil akarnya adalah: "<<akar;
    return 0;
}