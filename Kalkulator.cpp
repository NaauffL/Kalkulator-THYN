#include <iostream>
using namespace std;

class Kalkulator {
    public: 
      int tambah(int angka1, int angka2){
        return angka1 + angka2;
      }
  }operasi;


int main() {
  int a, b;
     cout << "\t Kalkulator sederhana" << endl << endl;
     cout << "Bilangan 1 : "; cin >> a; cout << endl;
     cout << "Bilangan 2 : "; cin >> b; cout << endl;
     cout << "Hasil Penjumlahan = " << operasi.tambah(a, b);
}
