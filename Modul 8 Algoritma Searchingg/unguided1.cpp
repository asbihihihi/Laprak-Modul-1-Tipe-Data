#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Fungsi untuk melakukan Binary Search
int binarySearch(const std::vector<char>& arr, char target) {
    int low = 0;
    int high = arr.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    string kalimat;
    char hurufYangDicari;

    // Ambil input kalimat dan huruf yang dicari dari pengguna
    cout << "Masukkan kalimat: ";
    getline(std::cin, kalimat);

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> hurufYangDicari;

    //Ubah kalimat menjadi daftar huruf
    vector<char> daftarHuruf(kalimat.begin(), kalimat.end());

    //Urutkan daftar huruf
    sort(daftarHuruf.begin(), daftarHuruf.end());

    // Cari huruf menggunakan Binary Search
    int index = binarySearch(daftarHuruf, hurufYangDicari);

    // Tampilkan hasil
    if (index != -1) {
        cout << "Huruf '" << hurufYangDicari << "' ditemukan pada indeks " << index << " dalam daftar yang diurutkan." << std::endl;
    } else {
        cout << "Huruf '" << hurufYangDicari << "' tidak ditemukan dalam kalimat." << std::endl;
    }

    return 0;
}
