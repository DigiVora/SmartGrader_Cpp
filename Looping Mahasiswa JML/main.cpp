#include <iostream>
using namespace std;
int main(){
	int jml;
	cout<<"Masukkan Jumlah Mahasiswa : ";
	cin>>jml;
	struct mahasiswa
	{
		string nim;
		string nama;
		float nilai;
	};
	mahasiswa mhs[jml];
	for (int i=0; i<jml; i++){
	cout<<"\nMasukkan NIM : \n";
	cin>>mhs[i].nim;
	cout<<"\nMasukkan Nama : \n";
	cin>>mhs[i].nama;
	cout<<"\nMasukkan Nilai Akhir : \n";
	cin>>mhs[i].nilai;
}
	cout<<"\nData yang diinputkan adalah : \n";
	for (int i=0; i<jml; i++){
	cout<<"NIM : "<<mhs[i].nim<<endl;
	cout<<"Nama : "<<mhs[i].nama<<endl;
	cout<<"Nilai Akhir : "<<mhs[i].nilai<<endl;
	cout<<endl;
}		
}
