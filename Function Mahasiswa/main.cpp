#include <iostream>
#include <iomanip>

using namespace std;

float hasilAkhir(float nilai1, float nilai2) {
    return (nilai1 + nilai2) / 2;
}

struct mahasiswa {
    string nim;
    string nama;
    float nilai1;
    float nilai2;
};

int main() {
    int jml;
    
    cout << "========================================" << endl;
    cout << "       INPUT DATA MAHASISWA            " << endl;
    cout << "========================================" << endl;
    cout << "Masukkan Jumlah Mahasiswa : ";
    cin >> jml;
    cout << "----------------------------------------" << endl;

    mahasiswa mhs[jml];

    for (int i = 0; i < jml; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        cout << "NIM          : "; cin >> mhs[i].nim;
        cout << "Nama         : "; cin.ignore(); getline(cin, mhs[i].nama);
        cout << "Nilai 1      : "; cin >> mhs[i].nilai1;
        cout << "Nilai 2      : "; cin >> mhs[i].nilai2;
    }

    cout << "\n\n========================================" << endl;
    cout << "       HASIL DATA MAHASISWA            " << endl;
    cout << "========================================" << endl;

    for (int i = 0; i < jml; i++) {
        cout << "Mahasiswa ke-" << i + 1 << endl;
        cout << left << setw(15) << "NIM"     << ": " << mhs[i].nim << endl;
        cout << left << setw(15) << "Nama"    << ": " << mhs[i].nama << endl;
        cout << left << setw(15) << "Nilai 1" << ": " << mhs[i].nilai1 << endl;
        cout << left << setw(15) << "Nilai 2" << ": " << mhs[i].nilai2 << endl;
        cout << left << setw(15) << "Rata-rata" << ": " 
     	<< fixed << setprecision(1) << hasilAkhir(mhs[i].nilai1, mhs[i].nilai2) << endl;
     	cout.unsetf(ios_base::fixed);
        cout << "----------------------------------------" << endl;
    }

    return 0;
}
