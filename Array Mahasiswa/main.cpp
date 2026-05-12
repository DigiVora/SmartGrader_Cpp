#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    struct mahasiswa {
        string nim;
        string nama;
        float nilai;
    };

    mahasiswa mhs[2];

    for (int i = 0; i < 2; i++) {
        cout << "========================================" << endl;
        cout << "        INPUT DATA MAHASISWA KE-" << i + 1 << endl;
        cout << "========================================" << endl;
        
        cout << left << setw(20) << "Masukkan NIM" << ": ";
        cin >> mhs[i].nim;
        
        cout << left << setw(20) << "Masukkan Nama" << ": ";
        cin.ignore();
        getline(cin, mhs[i].nama);
        
        cout << left << setw(20) << "Masukkan Nilai Akhir" << ": ";
        cin >> mhs[i].nilai;
        cout << endl;
    }
    
    system("cls");
    
    cout << "\n" << string(40, '=') << endl;
    cout << "         DATA YANG DIINPUTKAN" << endl;
    cout << string(40, '=') << endl;

    for (int i = 0; i < 2; i++) {
        cout << "Mahasiswa #" << i + 1 << ":" << endl;
        cout << "----------------------------------------" << endl;
        cout << left << setw(15) << "NIM"         << ": " << mhs[i].nim << endl;
        cout << left << setw(15) << "Nama"        << ": " << mhs[i].nama << endl;
        cout << left << setw(15) << "Nilai Akhir" << ": " << mhs[i].nilai << endl;
        cout << "----------------------------------------" << endl;
    }

    return 0;
}
