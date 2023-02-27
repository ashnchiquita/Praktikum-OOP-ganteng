/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Latihan Inheritance - Bus.cpp
*/

#include "Bus.hpp"

// BUS (DERIVED CLASS)

// CTOR
// Bus::Bus() : Bus(0, 0, "XXX", 0) {} // ERROR C++11
Bus::Bus() : Kendaraan(0,0,"XXX"), kapasitas(0) {}
Bus::Bus(int n, int t, string m, int k) : Kendaraan(n,t,m), kapasitas(k) {}

// CCTOR tidak butuh karena tidak ada DMA
// Bus::Bus(const Bus& b) {}

// ASSIGNMENT tidak butuh karena tidak ada DMA
// Bus& Bus::operator=(const Bus& b) {}

// DTOR tidak butuh karena tidak ada DMA baik di base maupun derived class
// Bus::~Bus() {}

// redefine virtual method
void Bus::printInfo() const {
    Kendaraan::printInfo();
    cout << "Kategori: Bus" << endl;
}
int Bus::biayaSewa(int lamaSewa) const {
    return 1000000 * lamaSewa;
}

// VIRTUAL COPY
Kendaraan* Bus::clone() const {
    return new Bus(*this);
}