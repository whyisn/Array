#include <iostream>
using namespace std;

int main(){
     int ArrayNilai[6];
     int tampung = 0;

     cout<<"Nama: Wahyu Isnan\n";
     cout<<"Nim: 22343031\n";
     cout<<"Prodi: Informatika\n";

     cout<<"=========================================";
     cout<<"\n= Program Menjumlahkan Semua Elemen Array =\n";
     cout<<"=========================================\n";

     cout<<"\n== Isi Array ==\n";
     for(int i=1; i<6;i++){
          cout<<"Isi indek ke ["<<i<<"] = ";
          cin>>ArrayNilai[i];
     }

     for(int i=1; i<6;i++){
          tampung = tampung + ArrayNilai[i];
     }

     cout<<"\nHasil Penjumlahan semua elemen Array : "<<tampung;

     return 0;
}
