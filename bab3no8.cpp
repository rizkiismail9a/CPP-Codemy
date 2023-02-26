#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
   int bil;
   cout<<"Masukkan bilangan: "; cin>>bil;
   
   string stri = to_string(bil);
   string ans;
   ans = stri += " adalah angka ";

   //Tahap satu
   if(bil >= 1 || bil <= 9){
        ans += "satuan";
   }
   else if ( bil >= 10 || bil <= 99 ){
        ans += "puluhan";
   }
   else if ( bil >= 100 || bil <= 999 ){
        ans += "ratusan";
   }

   //tahap dua

   if( bil % 2 == 0 || bil % 3 == 0 || bil % 5 == 0 || bil % 7 == 0){
        ans += " yang habis dibagi ";
        bool bacang = false;
            if(bil % 2 == 0){
                if(bacang && ( bil % 3 != 0 && bil % 5 != 0 && bil % 7 != 0)){
                    ans += " dan ";
                }
                else if (bacang){
                    ans += ", ";
                }
                ans += "dua";
                bacang == true;
            }
            if (bil % 3 == 0){
                if (bacang &&)
            }
   }
   cout<<ans;
   return 0;
}