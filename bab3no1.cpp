#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int modal;
    int hasil_penjualan;
    cout<<"Masukkan modal awal: "; cin>>modal;
    cout<<"Masukkan hasil: "; cin>>hasil_penjualan;

    if(modal<hasil_penjualan){
        cout<<"Mahasiswa TPB mendapatkan keuntungan: "<<hasil_penjualan-modal<<endl;
    }
    else if(modal>hasil_penjualan){
        cout<<"Mahasiswa TPB mendapatkan kerugian: "<<modal-hasil_penjualan<<endl;
    }
    else{
        cout<<"Mahasiswa TPB tidak untung maupun rugi.";
    }
    return 0;
}