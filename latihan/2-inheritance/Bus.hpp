/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Latihan Inheritance - Bus.hpp
*/

#include "Kendaraan.hpp"

class Bus : public Kendaraan {
    private:
        int kapasitas;
    public:
        // CTOR
        Bus();
        Bus(int n, int t, string m, int k);

        // CCTOR tidak butuh karena tidak ada DMA
        // Bus(const Bus& b) {}

        // ASSIGNMENT tidak butuh karena tidak ada DMA
        // Bus& operator=(const Bus& b) {}

        // DTOR tidak butuh karena tidak ada DMA baik di base maupun derived class
        // ~Bus();

        // redefine virtual method
        void printInfo() const;
        int biayaSewa(int lamaSewa) const;

        // VIRTUAL COPY
        Kendaraan* clone() const;
};