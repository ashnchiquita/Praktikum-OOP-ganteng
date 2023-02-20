/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Responsi 2 - Rekening Giro
*/

#include "RekeningGiro.h"

// Konstruktor menginisialisi saldo (parameter 1) dan suku bunga (parameter 2)
// Set suku bunga 0.0 apabila suku bunga bernilai negatif
RekeningGiro::RekeningGiro(double s, double b) : Rekening(s) {
    this->sukuBunga = (b > 0 ? b : 0);
}

// Getter, Setter
void RekeningGiro::setSukuBunga(double b) {
    this->sukuBunga = b;
}
double RekeningGiro::getSukuBunga() const {
    return this->sukuBunga;
}

// Member Function
// Bunga dihitung dari saldo dikali suku bunga
double RekeningGiro::hitungBunga() {
    return this->sukuBunga * this->getSaldo();
}