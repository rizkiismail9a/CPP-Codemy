#include <iostream>

using namespace std;
int that=0;
string a, b, c, d, e;

int main(){
    
cout<<"\nStatus? ";
cin>>a;
if (a == "Lajang"){
    ++that;

}
cout<<that, "\n";
cout<<"\nMengerti investasi? ";
cin>>b;
if (b == "Iya"){
    ++that;

}
cout<<that, "\n";
cout<<"\nInvestasi buat apa? ";
cin>>c;
if (c == "Masa depan"){
    ++that;

}
cout<<that, "\n";
cout<<"\nBuat berapa lama? ";
cin>>d;
if (d == "> 5 tahun"){
	++that;

}
cout<<that, "\n";
cout<<"\nKalau nilai investasi berkurang 15%, gimana? ";
cin>>e;
if (e == "Tambah"){
    ++that;

}
cout<<that, "\n";
return 0;
}