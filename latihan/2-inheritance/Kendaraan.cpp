/*  NIM     : 13521129
    name    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Latihan Inheritance - Kendaraan.cpp
*/

#include "Kendaraan.hpp"

// KENDARAAN (BASE CLASS)

// CTOR
Kendaraan::Kendaraan() : Kendaraan(0, 0, "XXX") {} // ERROR C++ 11
Kendaraan::Kendaraan(int n, int t, string m) {
    this->nomor = n;
    this->tahun = t;
    this->merk = m;
}

// CCTOR tidak butuh karena tidak ada DMA
// Kendaraan::Kendaraan(const Kendaraan& k) {}

// ASSIGNMENT tidak butuh karena tidak ada DMA
// Kendaraan& Kendaraan::operator=(const Kendaraan& k) {}

// DTOR tidak butuh karena tidak ada DMA baik di base maupun derived class
Kendaraan::~Kendaraan() {}

// OTHERS
int Kendaraan::getNomor() {
    return this->nomor;
}
int Kendaraan::getTahun() {
    return this->tahun;
}
string Kendaraan::getMerk() {
    return this->merk;
}
void Kendaraan::printInfo() const {
    cout << "Nomor: " << this->nomor << endl;
    cout << "Tahun Keluaran: " << this->tahun << endl;
    cout << "Merk: " << this->merk << endl;
}