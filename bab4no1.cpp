#include <iostream>
using namespace std;

int main(){
    int N;
    cout<<"Masukkan angka: "; cin>>N;
    cout<<"faktor-faktornya adalah: "<<endl;
    for(int i = N; i > 0; i--){
        if((N % i )== 0){
            cout<<i<<endl;}
        
    }
        return 0;
}