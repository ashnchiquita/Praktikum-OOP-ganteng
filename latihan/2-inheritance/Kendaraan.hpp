/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Latihan Inheritance - Kendaraan.hpp
*/

#ifndef KENDARAAN_HPP
#define KENDARAAN_HPP

#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
    private:
        int nomor, tahun;
        string merk;
    public:
        // CTOR
        Kendaraan();
        Kendaraan(int n, int t, string m);

        // CCTOR tidak butuh karena tidak ada DMA
        // Kendaraan(const Kendaraan& k);

        // ASSIGNMENT tidak butuh karena tidak ada DMA
        // Kendaraan& operator=(const Kendaraan& k);

        // DTOR tidak butuh karena tidak ada DMA baik di base maupun derived class
        virtual ~Kendaraan();

        // OTHERS
        int getNomor();
        int getTahun();
        string getMerk();

        virtual void printInfo() const;
        virtual int biayaSewa(int lamaSewa) const = 0;

        // VIRTUAL COPY
        virtual Kendaraan* clone() const = 0;
};

#endif