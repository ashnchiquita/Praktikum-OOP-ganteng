/*  NIM     : 13521129
    name    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Latihan 4 Sekawan - Kendaraan.cpp
*/

#include "Kendaraan.hpp"

// KELAS KENDARAAN
// CTOR
Kendaraan::Kendaraan() : Kendaraan(0, 0, "mobil", "XXX") {}
Kendaraan::Kendaraan(int n, int t, string k, string m) {
    this->nomor = n;
    this->tahun = t;
    this->merk = m;
    this->kategori = k;
}

// CCTOR tidak butuh karena tidak ada DMA
// Kendaraan::Kendaraan(const Kendaraan& k) {}

// ASSIGNMENT tidak butuh karena tidak ada DMA
// Kendaraan& Kendaraan::operator=(const Kendaraan& k) {}

// DTOR tidak butuh karena tidak ada DMA
// Kendaraan::~Kendaraan() {}

// OTHERS
void Kendaraan::printInfo() const {
    cout << "Nomor: " << this->nomor << endl;
    cout << "Tahun Keluaran: " << this->tahun << endl;
    cout << "Merk: " << this->merk << endl;
    cout << "Kategori: " << this->kategori << endl;
}
int Kendaraan::biayaSewa(int lamaSewa) const {
    if (this->kategori == "bus") {
        return 1000000 * lamaSewa;
    } else if (this->kategori == "minibus") {
        return (lamaSewa <= 5 ? 5000000 : 5000000 + 500000 * (lamaSewa - 5));
    } else { // this->kategori == "mobil"
        return 500000 * lamaSewa;
    }
}