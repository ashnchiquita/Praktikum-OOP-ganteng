/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Responsi 2 - Rekening Tabungan
*/

#include "RekeningTabungan.h"

// Konstruktor menginisialisi saldo (parameter 1) dan biaya transaksi (parameter 2)
// Set biaya transaksi 0.0 apabila biaya transaksi bernilai negatif
RekeningTabungan::RekeningTabungan(double, double) {

}

// Getter, Setter
void RekeningTabungan::setBiayaTransaksi(double) {

}
double RekeningTabungan::getBiayaTransaksi() const {

}

// Member Function
// Panggil fungsi simpanUang dari parent class
// Kurangkan saldo dengan biaya transaksi
void RekeningTabungan::simpanUang(double) {

}

// Panggil fungsi tarikUang dari parent class
// Kurangkan saldo dengan biaya transaksi hanya jika penarikan uang berhasil
// Saldo mungkin saja menjadi negatif apabila setelah penarikan, saldo < biaya transaksi
// Kembalikan boolean yang mengindikasikan apakah uang berhasil ditarik atau tidak
bool RekeningTabungan::tarikUang(double) {

}