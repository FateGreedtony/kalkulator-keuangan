#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

double perhitunganPengeluaran(double a, double b){
    return a -= b;
}

double perhitunganBunga(double a, double b){
    return a *= b;
}

double  rerataPengeluaran(double a, double b){
    return a /= b;
}

double sisaPengeluaran(int a, int b){
    return a %= b;
}

int main(){
    double pendapatan, pengeluaran, tabungan, bungaTabungan, sisaUang;

    cout << "===== Selamat datang di kalkulator keuangan =====" << endl;
    system("pause");

    // pengambilan data keuangan
    cout << "silahkan masukkan pendapatanmu bulan ini" << endl;
    cin >> pendapatan;
    cout << "silahkan masukkan pengeluaranmu bulan ini" << endl;
    cin >> pengeluaran;
    cout << "silahkan masukkan tabunganmu sejauh ini" << endl;
    cin >> tabungan;
    cout << "bagaimana dengan bunga tabunganmu?" << endl;
    cin >> bungaTabungan;
    
    // hasil perhitungan
    cout << "1. Pendapatan bulan ini: " << pendapatan << endl;
    cout << "2. Sisa uang setelah pengeluaran bulan ini: " << perhitunganPengeluaran(pendapatan, pengeluaran) << endl;
    cout << "3. tabungan sejauh ini: " << perhitunganBunga(tabungan, bungaTabungan) << endl;
    cout << "4. rerata pengeluaranmu: " << rerataPengeluaran(pendapatan, pengeluaran) << endl;
    cout << "5. sisa pengeluaranmu: " << sisaPengeluaran(pendapatan, pengeluaran) << endl;
 
    system("pause");
    return 0;
}