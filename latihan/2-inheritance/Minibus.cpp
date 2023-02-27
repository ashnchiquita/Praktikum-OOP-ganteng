/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Latihan Inheritance - Minibus.cpp
*/

#include "Minibus.hpp"

// MINIBUS (DERIVED CLASS)

// CTOR
Minibus::Minibus() : Kendaraan(0, 0, "XXX") {}
Minibus::Minibus(int n, int t, string m) : Kendaraan(n,t,m) {}

// CCTOR tidak butuh karena tidak ada DMA
// Minibus::Minibus(const Minibus& mb) {}

// ASSIGNMENT tidak butuh karena tidak ada DMA
// Minibus& Minibus::operator=(const Minibus& mb) {}

// DTOR tidak butuh karena tidak ada DMA baik di base maupun derived class
// Minibus::~Minibus() {}

int Minibus::diskon(int lamaSewa) {
    return (lamaSewa > 10 ? 0.1 * this->biayaSewa(lamaSewa) : 0);
}
// redefine virtual method
void Minibus::printInfo() const {
    Kendaraan::printInfo();
    cout << "Kategori: Minibus" << endl;
}
int Minibus::biayaSewa(int lamaSewa) const {
    return (lamaSewa <= 5 ? 5000000 : 5000000 + 500000 * (lamaSewa - 5));
}

// VIRTUAL COPY
Kendaraan* Minibus::clone() const {
    return new Minibus(*this);
}