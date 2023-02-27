/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Latihan Inheritance - Mobil.hpp
*/

#include "Kendaraan.hpp"

class Mobil : public Kendaraan {
    private:
        string supir;
    public:
        // CTOR
        Mobil();
        Mobil(int n, int t, string m, string s);

        // CCTOR tidak butuh karena tidak ada DMA
        // Mobil(const Mobil& m) {}

        // ASSIGNMENT tidak butuh karena tidak ada DMA
        // Mobil& operator=(const Mobil& m) {}

        // DTOR tidak butuh karena tidak ada DMA baik di base maupun derived class
        // ~Mobil();

        // redefine virtual method
        void printInfo() const;
        int biayaSewa(int lamaSewa) const;

        // VIRTUAL COPY
        Kendaraan* clone() const;
};