#include <iostream>

using namespace std;

int main(){
    string A, B, C;

    cout<<"Masukkan pelaku yang ditunjuk A: "; cin>>A;
    cout<<"Masukkan pelaku yang ditunjuk B: "; cin>>B;
    cout<<"Masukkan pelaku yang ditunjuk C: "; cin>>C;

    if (A == B){
        cout<<"C berbohong"<<endl;
        cout<<"Pelaku adalah si "<<B;
    }
    else if (A==C){
        cout<<"B berbohong"<<endl;
        cout<<"Pelaku adalah si "<<C;
    }
    else if(B==C){
        cout<<"A berbohong"<<endl;
        cout<<"Pelaku adalah si "<<C;
    }
    else if(A==B && B==C){
        cout<<"Pelaku adalah si "<<C;
    }
    else{
        cout<<"Pelaku tidak dapat ditentukan.";
    }

    return 0;
}