#include <iostream>
#include <cmath>
using namespace std;

class mtk{
    public:
    double pi = 3.14;
} VKubus, VBola;

int main(){
float r;
cout<<"Masukkan Nilai r: "; cin>>r;
double vKubus = pow(r,3);
cout<<"Volume Kubus adalah: "<<vKubus<<endl;
double vbola = (4.0f/3.0f)*(VBola.pi)*pow(r,3);
cout<<"Volume Bola adalah: "<<vbola<<endl;
return 0;

}