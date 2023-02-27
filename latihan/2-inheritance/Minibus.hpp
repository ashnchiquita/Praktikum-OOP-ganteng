/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Latihan Inheritance - Minibus.hpp
*/

#include "Kendaraan.hpp"

class Minibus : public Kendaraan {
    public:
        // CTOR
        Minibus();
        Minibus(int n, int t, string m);

        // CCTOR tidak butuh karena tidak ada DMA
        // Minibus(const Minibus& mb) {}

        // ASSIGNMENT tidak butuh karena tidak ada DMA
        // Minibus& operator=(const Minibus& mb) {}

        // DTOR tidak butuh karena tidak ada DMA baik di base maupun derived class
        // ~Minibus();

        int diskon(int lamaSewa);
        // redefine virtual method
        void printInfo() const;
        int biayaSewa(int lamaSewa) const;

        // VIRTUAL COPY
        Kendaraan* clone() const;
};