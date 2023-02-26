/*katanya, semua bilangan kelipatan 9 jika dijumlahkan semua digitnya,
akan menghasilkan kelipatan 9 lagi.*/
#include <iostream>
using namespace std;

int main(){
    int N;
    cout<<"Masukkan angka: "; cin>>N;
    int digit=0;    

    while(N>0){
        digit += N%10;
        N/10;
    }
    cout<<"Jumlah semua digitnya adalah: "<<digit;
    return 0;
}