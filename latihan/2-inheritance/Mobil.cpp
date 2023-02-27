/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Latihan Inheritance - Mobil.cpp
*/

#include "Mobil.hpp"
// MOBIL (DERIVED CLASS)

// CTOR
Mobil::Mobil() : Kendaraan(0,0,"XXX"), supir("XXXX") {}
Mobil::Mobil(int n, int t, string m, string s) : Kendaraan(n,t,m), supir(s) {}

// CCTOR tidak butuh karena tidak ada DMA
// Mobil::Mobil(const Mobil& m) {}

// ASSIGNMENT tidak butuh karena tidak ada DMA
// Mobil& Mobil::operator=(const Mobil& m) {}

// DTOR tidak butuh karena tidak ada DMA baik di base maupun derived class
// Mobil::~Mobil() {}

// redefine virtual method
void Mobil::printInfo() const {
    Kendaraan::printInfo();
    cout << "Kategori: Mobil" << endl;
}
int Mobil::biayaSewa(int lamaSewa) const {
    return 500000 * lamaSewa;
}

// VIRTUAL COPY
Kendaraan* Mobil::clone() const {
    return new Mobil(*this);
}