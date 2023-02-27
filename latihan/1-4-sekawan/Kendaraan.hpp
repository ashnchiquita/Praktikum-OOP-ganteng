/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Latihan 4 Sekawan - Kendaraan.hpp
*/

#ifndef KENDARAAN_HPP
#define KENDARAAN_HPP

#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
    private:
        int nomor, tahun;
        string kategori, merk;
    public:
        // CTOR
        Kendaraan();
        Kendaraan(int n, int t, string k, string m);

        // CCTOR tidak butuh karena tidak ada DMA
        // Kendaraan(const Kendaraan& k);

        // ASSIGNMENT tidak butuh karena tidak ada DMA
        // Kendaraan& operator=(const Kendaraan& k);

        // DTOR tidak butuh karena tidak ada DMA
        // ~Kendaraan();

        // OTHERS
        void printInfo() const;
        int biayaSewa(int lamaSewa) const;
};

#endif