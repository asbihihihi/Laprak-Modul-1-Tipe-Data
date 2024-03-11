#include <iostream>

using namespace std;
// Membuat fungsi luas persegi panjang
int LuasPersegiPanjang(int a, int b) {
    return 2*(a+b);
}

// Membuat fungsi luas persegi
float LuasPersegi(float a, float b) {
    return a*b;
}

int main() {
    // Menggunakan tipe data primitif int dan float
    int angka1 = 12, angka2 = 2;
    float angka3 = 4.5, angka4 = 7.5;

    // Memanggil fungsi pertama
    cout << "Menghitung Luas Persegi Panjang dan Luas Persegi" << endl;
    cout << "================================================" << endl;

    // Memanggil fungsi pertama
    int HasilLuasPersegiPanjang = LuasPersegiPanjang(angka1, angka2);
    cout << "Hasil dari luas persegi panjang " << angka1 << " dan " << angka2 << " : " << HasilLuasPersegiPanjang << endl;

    // Memanggil fungsi kedua
   int HasilLuasPersegi = LuasPersegi(angka3, angka4);
    cout << "Hasil dari luas persegi " << angka3 << " dan " << angka4 << " : " << HasilLuasPersegi << endl;

    return 0;
}
