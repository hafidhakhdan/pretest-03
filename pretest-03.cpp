/*
Nama	: Hafidh Akhdan Najib
Kelas	: A
NPM		: 140810180061
Tanggal	: 12/03/2019
Pretes 03
*/

#include <iostream>
#include <string.h>

using namespace std;

struct r_mhs {
	char npm [14];
	char nama [40];
	float ipk ;
};

typedef r_mhs larikMhs [30];

void banyakData (int& n){
	cout<<"Input jumlah data : "; cin>>n;
}

void inputMhs (larikMhs& mhs, int n){
	for (int i = 0; i<n; i++){
		cout<<"NPM : "; cin>>mhs[i].npm;
		cout<<"Nama : "; cin.ignore(); cin>>mhs[i].nama;
		cout<<"IPK : "; cin>>mhs[i].ipk;
	}
}

void cetakMhs (larikMhs mhs, int n){
	cout<<"DATA MAHASISWA";
	cout<<"===============";
	
	for (int i=0; i<n;i++){
		cout<<i<<mhs[i].npm<<"\t"<<mhs[i].nama<<"\t"<<mhs[i].ipk<<"\n";
	}
}

int main (){
	r_mhs larikMhs;
	int n;
	
	banyakData (n);
	inputMhs (larikMhs,n);
	cetakMhs (larikMhs,n);
}
