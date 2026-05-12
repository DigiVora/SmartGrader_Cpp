#include <iostream>
#include <iomanip>
#include <string> 
using namespace std;

int main(){
    
    struct mahasiswa
    {
        string nim;
        string nama;
        float nilai;
    };
    
    mahasiswa mhs;
    
    cout << "Masukkan NIM         : ";
    cin >> mhs.nim;
    
    cout << "Masukkan Nama        : ";
    cin.ignore();
    getline(cin, mhs.nama);
    
    cout << "Masukkan Nilai Akhir : ";
    cin >> mhs.nilai;
    
    cout << "\n\nData yang diinputkan adalah : \n\n";
    cout << left << setw(15) << "NIM"         << " : " << mhs.nim << endl;
    cout << left << setw(15) << "Nama"        << " : " << mhs.nama << endl;
    cout << left << setw(15) << "Nilai Akhir" << " : " << mhs.nilai << endl;
    
    return 0;
}
