/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 2 Maret 2023
   	Topik		: Responsi 3
   	Deskripsi	: Memo */

#include "memo.h"

/* 
    Membuat objek Memo dengan 'pesan' dan 'untuk' kosong
*/
Memo::Memo() {
    this->pesan = "";
    this->untuk = "";
}

/* 
    Membuat objek Memo dengan isi sesuai yang diberikan.
    
    Jika panjang pesan melebihi panjang maksimum, maka
    metode ini melemparkan PesanKepanjanganException.
*/
Memo::Memo(string pesan, string untuk) {
    if (pesan.length() > PESAN_MAX) {
        throw PesanKepanjanganException();
    }
    this->pesan = pesan;
    this->untuk = untuk;
}

/* 
    Menyalin nilai pesan dan untuk ke objek lain
*/
Memo& Memo::operator=(Memo& obj) {
    this->pesan = obj.getPesan();
    this->untuk = obj.getUntuk();

    return *this;
}

/*
    Mendapatkan nilai pesan
*/
string Memo::getPesan() {
    return this->pesan;
}

/*
    Mendapatkan nilai untuk
*/
string Memo::getUntuk() {
    return this->untuk;
}