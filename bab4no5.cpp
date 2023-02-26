#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int L, R, X;
    cout<<"Masukkan angka: "<<endl;
    cin>>L; cin>>R; cin>>X;
    cout<<"pasangan a dan b yang memenuhi fungsi adalah: ";

    for (int a = L; a <= R; a++){
        for (int b = (a + 1); b <= R; b++){
            int ans = 0;
            for (int num = a; a<b; a++){
                num += ans;
            }
            if( ans >= X){
                cout<<a<<" "<<b<<endl;
            }
        }
    }
    return 0;
}