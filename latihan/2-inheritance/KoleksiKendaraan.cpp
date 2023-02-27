/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Latihan Inheritance - KoleksiKendaraan.cpp
*/

#include "KoleksiKendaraan.hpp"

// KELAS KOLEKSI KENDARAAN

// CTOR
KoleksiKendaraan::KoleksiKendaraan() : size(100), nEff(0) {
    this->buffer = new Kendaraan*[this->size];
}
KoleksiKendaraan::KoleksiKendaraan(int sz) : size(sz), nEff(0) {
    this->buffer = new Kendaraan*[this->size];
}

// CCTOR
KoleksiKendaraan::KoleksiKendaraan(const KoleksiKendaraan& kk) {
    this->size = kk.size;
    this->nEff = kk.nEff;
    this->buffer = new Kendaraan*[this->size];
    for (int i = 0; i < this->nEff; i++) {
        this->buffer[i] = kk.buffer[i]->clone();
    }
}

// ASSIGNMENT
KoleksiKendaraan& KoleksiKendaraan::operator=(const KoleksiKendaraan& kk) {
    for (int i = 0; i < this->nEff; i++) {
        delete this->buffer[i];
    }
    delete [] this->buffer;

    this->size = kk.size;
    this->nEff = kk.nEff;
    this->buffer = new Kendaraan*[this->size];
    for (int i = 0; i < this->nEff; i++) {
        this->buffer[i] = kk.buffer[i]->clone();
    }
    return *this;
}

// DTOR
KoleksiKendaraan::~KoleksiKendaraan() {
    for (int i = 0; i < this->nEff; i++) {
        delete this->buffer[i];
    }
    delete [] this->buffer;
}

// OTHERS
void KoleksiKendaraan::printAll() const {
    for (int i = 0; i < this->nEff; i++) {
        cout << "------------------------" << endl;
        this->buffer[i]->printInfo();
    }
}
KoleksiKendaraan& KoleksiKendaraan::operator<<(const Kendaraan& k) {
    this->buffer[this->nEff] = k.clone();
    this->nEff++;
    return *this;
}
KoleksiKendaraan& KoleksiKendaraan::operator<<(const KoleksiKendaraan& kk) {
    int batas = (this->size > this->nEff + kk.nEff ? kk.nEff : this->size - this->nEff);
    for (int i = 0; i < batas; i++) {
        this->buffer[this->nEff + i] = kk.buffer[i]->clone();
    }
    this->nEff += batas;
    return *this;
}