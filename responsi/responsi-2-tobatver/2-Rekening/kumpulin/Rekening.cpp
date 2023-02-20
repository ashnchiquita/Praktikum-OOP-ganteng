/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Responsi 2 - Rekening
*/

#include "Rekening.h"

// Konstruktor untuk menginisialisasi saldo
// Set saldo 0.0 apabila saldo bernilai negatif
Rekening::Rekening(double s) {
    this->saldo = (s > 0 ? s : 0);
}

// Getter, Setter
void Rekening::setSaldo(double s) {
    this->saldo = s;
}
double Rekening::getSaldo() const {
    return this->saldo;
}

// Member Function
// Tambahkan sejumlah nominal uang ke saldo
void Rekening::simpanUang(double s) {
    this->saldo += s;
}

// Kurangkan sejumlah nominal uang dari saldo apabila saldo mencukupi (tidak negatif setelah dikurangkan)
// Kembalikan boolean yang mengindikasikan apakah uang berhasil ditarik atau tidak
bool Rekening::tarikUang(double tarik) {
    if (this->saldo >= tarik) {
        this->saldo -= tarik;
        return true;
    }
    return false;
}