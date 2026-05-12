#include <iostream>
using namespace std;
int main(){
	
	struct mahasiswa
	{
		string nim;
		string nama;
		float nilai;
	};
	mahasiswa mhs[3];
	for (int i=0; i<4; i++){
	cout<<"Masukkan NIM : ";
	cin>>mhs[i].nim;
	cout<<"Masukkan Nama : ";
	cin>>mhs[i].nama;
	cout<<"Masukkan Nilai Akhir : ";
	cin>>mhs[i].nilai;
}
	cout<<"\n\nData yang diinputkan adalah : \n\n";
	for (int i=0; i<4; i++){
	cout<<"NIM : "<<mhs[i].nim<<endl;
	cout<<"Nama : "<<mhs[i].nama<<endl;
	cout<<"Nilai Akhir : "<<mhs[i].nilai<<endl;
	cout<<endl;
}		
}
