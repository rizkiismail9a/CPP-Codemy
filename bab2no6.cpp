#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int NIM;
    cout<<"masukkan 3 angka terakhir NIM: "; cin>>NIM;

    int kelas_mtk = 1 + (NIM % 2);
    int kelas_fisika = 7 + (NIM % 3);
    int kelas_kimia = 9 + (NIM % 4);

    cout<<"Anda berada di kelas: "<<endl;
    cout<<"Kelas "<<kelas_mtk<<"-Matematika"<<endl;
    cout<<"Kelas "<<kelas_fisika<<"-Fisika"<<endl;
    cout<<"Kelas "<<kelas_kimia<<"-Kimia"<<endl;
    return 0;
}