#include <iostream>
using namespace std;

// Definition of the structure representing Warga data
struct Warga {
    string nama;
    int64_t nik;
};

// Definition of the class representing motor data
class DealerMotor {
private:
    string MerkMotor;
    string NomerPolisi;

public:
    DealerMotor(string MerkMotor, string NomerPolisi) {
        this->MerkMotor = MerkMotor;
        this->NomerPolisi = NomerPolisi;
    }

    void info() {
        cout << "Merek Motor: " << MerkMotor << endl;
        cout << "Nomer Polisi Motor: " << NomerPolisi << endl;
    }
};

int main() {
    Warga wrg;
    wrg.nama = "Falah Asbi Pangestu";
    wrg.nik = 3329022453234000;

    cout << "Nama Warga yang terdaftar: " << wrg.nama << endl;
    cout << "NIK yang terdaftar: " << wrg.nik << endl;

    // Using the DealerMotor class
    DealerMotor mtr("Vario", "R 4444 IMU");
    mtr.info();

    return 0;
}
