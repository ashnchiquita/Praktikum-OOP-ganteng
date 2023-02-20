/*  NIM     : 13521129
    name    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Latihan 4 Sekawan - KoleksiKendaraan.cpp
*/

#include "KoleksiKendaraan.hpp"

// KELAS KOLEKSI KENDARAAN

// CTOR
KoleksiKendaraan::KoleksiKendaraan() : KoleksiKendaraan(100) {}
KoleksiKendaraan::KoleksiKendaraan(int sz) {
    this->size = sz;
    this->nEff = 0;
    this->buffer = new Kendaraan[this->size];
}

// CCTOR
KoleksiKendaraan::KoleksiKendaraan(const KoleksiKendaraan& kk) {
    this->size = kk.size;
    this->nEff = kk.nEff;
    this->buffer = new Kendaraan[this->size];
    for (int i = 0; i < this->nEff; i++) {
        this->buffer[i] = kk.buffer[i];
    }
}

// ASSIGNMENT
KoleksiKendaraan& KoleksiKendaraan::operator=(const KoleksiKendaraan& kk) {
    this->size = kk.size;
    this->nEff = kk.nEff;
    delete [] this->buffer;
    this->buffer = new Kendaraan[this->size];
    for (int i = 0; i < this->nEff; i++) {
        this->buffer[i] = kk.buffer[i];
    }
    return *this;
}

// DTOR
KoleksiKendaraan::~KoleksiKendaraan() {
    delete [] this->buffer;
}

// OTHERS
void KoleksiKendaraan::printAll() const {
    for (int i = 0; i < this->nEff; i++) {
        cout << "------------------------" << endl;
        this->buffer[i].printInfo();
    }
}
KoleksiKendaraan& KoleksiKendaraan::operator<<(const Kendaraan& k) {
    this->buffer[this->nEff] = k;
    this->nEff++;
    return *this;
}
KoleksiKendaraan& KoleksiKendaraan::operator<<(const KoleksiKendaraan& kk) {
    int batas = (this->size > this->nEff + kk.nEff ? kk.nEff : this->size - this->nEff);
    for (int i = 0; i < batas; i++) {
        this->buffer[this->nEff + i] = kk.buffer[i];
    }
    this->nEff += batas;
    return *this;
}