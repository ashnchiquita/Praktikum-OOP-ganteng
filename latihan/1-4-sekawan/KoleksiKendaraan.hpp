/*  NIM     : 13521129
    name    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Latihan 4 Sekawan - KoleksiKendaraan.hpp
*/

#include "Kendaraan.hpp"

class KoleksiKendaraan {
    private:
        Kendaraan * buffer;
        int size, nEff;
    public:
        // CTOR
        KoleksiKendaraan();
        KoleksiKendaraan(int sz);

        // CCTOR
        KoleksiKendaraan(const KoleksiKendaraan& kk);

        // ASSIGNMENT
        KoleksiKendaraan& operator=(const KoleksiKendaraan& kk);

        // DTOR
        ~KoleksiKendaraan();

        // OTHERS
        void printAll() const;
        KoleksiKendaraan& operator<<(const Kendaraan& k);
        KoleksiKendaraan& operator<<(const KoleksiKendaraan& kk);
};