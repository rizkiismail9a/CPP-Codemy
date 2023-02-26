/*Tuan Wang ingin menulis daftar bilangan prima. Ia memiliki bilangan A dan B. Tulis semua bilangan
prima antara A dan B secara inklusif.*/

#include <iostream>

using namespace std;

int main(){
    int A, B;
    cout<<"Masukkan bilangan: "<<endl;
    cout<<"Masukkan A: "; cin>>A;
    cout<<"Masukkan B: "; cin>>B;
    cout<<"Bilangan prima antara itu adalah: \n";
    for(int x = A; x<= B; x++){
        if( x != 0 || x != 1){
            bool prima = true;
            for ( int n = 2; n < x; n++){
                if( x % n == 0){
                    prima = false;
                    
                }
            }
        if(prima){
            cout<<x<<endl;
        }
        }
        
    }
}