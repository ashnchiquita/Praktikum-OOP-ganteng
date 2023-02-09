/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 9 Februari 2023
   	Topik		: Praktikum 1
   	Deskripsi	: Bunch Of Keys */

#include "BunchOfKeys.hpp"

// ctor
BunchOfKeys::BunchOfKeys() {
	this->n_keys = 0;
}

// member function
void BunchOfKeys::add() {
	this->n_keys++;
}
void BunchOfKeys::shake() {
	if (this->n_keys > 1) {
		for(int i = 1; i <= this->n_keys; i++) {
			cout << "krincing" << endl;
		}
	} else {
		cout << "Tidak terjadi apa-apa" << endl;
	}
}
