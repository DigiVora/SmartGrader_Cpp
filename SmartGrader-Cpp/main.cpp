#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct mahasiswa {
    string nim;
    string nama;
    float uts;
    float uas;
    float nilaiAkhir;
    char grade;
};

float hitungNilaiHasil(float uas, float uts) {
    return (uas * 0.4) + (uts * 0.6);
}

int main() {
    int jumlah;
    
    cout << "Masukkan banyak data yang diinginkan : ";
    cin >> jumlah;

    mahasiswa mhs[jumlah];

    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Mahasiswa ke- " << i + 1 << endl;
        cout << "NIM             : ";
        cin >> mhs[i].nim;

        cin.ignore(); 
        cout << "Nama Mahasiswa  : ";
        getline(cin, mhs[i].nama);

        cout << "Nilai UTS       : ";
        cin >> mhs[i].uts;
        cout << "Nilai UAS       : ";
        cin >> mhs[i].uas;

        mhs[i].nilaiAkhir = hitungNilaiHasil(mhs[i].uas, mhs[i].uts);

        if (mhs[i].nilaiAkhir >= 80) mhs[i].grade = 'A';
        else if (mhs[i].nilaiAkhir >= 70) mhs[i].grade = 'B';
        else if (mhs[i].nilaiAkhir >= 56) mhs[i].grade = 'C';
        else if (mhs[i].nilaiAkhir >= 47) mhs[i].grade = 'D';
        else mhs[i].grade = 'E';
    }

    system("cls");

    cout << "\n                     Daftar Nilai Mata Kuliah C++                    \n";
    cout << "===============================================================================\n";
    cout << setw(5)  << left << "No"
         << setw(25) << left << "Nama Mahasiswa"
         << setw(10) << left << "UTS"
         << setw(10) << left << "UAS"
         << setw(15) << left << "Nilai Akhir"
         << setw(10) << left << "Nilai Huruf" << endl;
    cout << "-------------------------------------------------------------------------------\n";

    for (int i = 0; i < jumlah; i++) {
        cout << setw(5)  << left << i + 1
             << setw(25) << left << mhs[i].nama
             << setw(10) << left << mhs[i].uts
             << setw(10) << left << mhs[i].uas
             << setw(15) << left << fixed << setprecision(1) << mhs[i].nilaiAkhir
             << setw(10) << left << mhs[i].grade << endl;
    }

    cout << "===============================================================================\n";

    return 0;
}
