#include <iostream>
#include <map> 
using namespace std;

int main() {
    // Mendeklarasikan fungsi array
    map<int, string> NamaKeluarga;
    
    NamaKeluarga[2311102045] = "Falah";
    NamaKeluarga[4544] = "Asbi";
    NamaKeluarga[4567] = "Pangestu";

    // Mencetak array
    cout << "Anak pertama : " << NamaKeluarga[2311102045] << endl
         << "Anak kedua : " << NamaKeluarga[4544] << endl
         << "Anak ketiga : " << NamaKeluarga[4567] << endl;

    return 0;
}
