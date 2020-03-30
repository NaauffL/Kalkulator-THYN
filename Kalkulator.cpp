#include <iostream>
using namespace std;

class Kalkulator {
    public: 
      int tambah(int angka1, int angka2){
        return angka1 + angka2;
      }
      int kurang(int x, int y){
          return x-y;
      }
      int kali(int p, int q){
          return p*q;
      }
  }operasi;


int main() {
  int a, b;
     cout << "\t Kalkulator sederhana" << endl << endl;
     cout << "Bilangan 1 : "; cin >> a; cout << endl;
     cout << "Bilangan 2 : "; cin >> b; cout << endl;
     cout << "Hasil Penjumlahan = " << operasi.tambah(a, b);
     cout << "Hasil pengurangan = " << operasi.kurang(a, b);
     cout << "Hasil Perkalian   = " << operasi.kali(a,b);
}
