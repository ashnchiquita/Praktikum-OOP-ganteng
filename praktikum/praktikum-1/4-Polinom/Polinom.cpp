/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 10 Februari 2023
   	Topik		: Latihan Praktikum 1
   	Deskripsi	: Polinom */

#include "Polinom.hpp"
#include <iostream>
using namespace std;

// ctor, cctor, dtor, op=
// untuk konstruktor, inisialisasi seluruh nilai koefisien dengan 0.

// ctor Polinom dengan orde = 0
Polinom::Polinom() : Polinom(0) {} // C++ 11

// ctor Polinom dengan orde = n (sesuai parameter)
Polinom::Polinom(int n) {
    this->derajat = n;
    this->koef = new int[this->derajat + 1];
    for (int i = 0; i <= this->derajat; i++) {
        this->koef[i] = 0;
    }
}

Polinom::Polinom(const Polinom& p) {
    this->derajat = p.derajat;
    this->koef = new int[this->derajat + 1];
    for (int i = 0; i <= this->derajat; i++) {
        this->koef[i] = p.koef[i];
    }
}

Polinom::~Polinom() {
    delete [] this->koef;
}

Polinom& Polinom::operator=(const Polinom& p) {
    this->derajat = p.derajat;
    delete [] this->koef;
    this->koef = new int[this->derajat + 1];
    for (int i = 0; i <= this->derajat; i++) {
        this->koef[i] = p.koef[i];
    }
}

// getter, setter
int Polinom::getKoefAt(int idx) const {
    return this->koef[idx];
}

int Polinom::getDerajat() const {
    return this->derajat;
}

void Polinom::setKoefAt(int idx, int val) {
    this->koef[idx] = val;
}

void Polinom::setDerajat(int val) {
    this->derajat = val;
}

// member function
// Melakukan pembacaan koefisien sejumlah derajat Polinom, dimulai dari x^0 (konstanta)
void Polinom::input() {
    for (int i = 0; i <= this->derajat; i++) {
        cin >> this->koef[i];
    }
}


// Mencetak seluruh koefisien polinom. Untuk setiap koefisien akhiri dengan end-of-line
// Cetaklah apa adanya dari koefisien ke-0 hingga derajat tertinggi (termasuk apabila koefisien = 0)
void Polinom::printKoef() {
    for (int i = 0; i <= this->derajat; i++) {
        cout << this->koef[i] << endl;
    }
}


// Menghitung hasil substitusi x dengan sebuah bilangan ke dalam polinom
int Polinom::substitute(int x) {
    int currX = x;
    int subs = this->koef[0];
    if (x != 0) {
        for (int i = 1; i <= this->derajat; i++) {
            subs += this->koef[i] * currX;
            currX *= x;
        }
    }
    return subs;
}

// Mencetak polinom dengan format: A+Bx^1+Cx^2+Dx^3...dst (diakhiri dengan end-of-line)
// Apabila suatu koefisien bernilai < 0, gunakan tanda "-" untuk menggantikan tanda "+"
// Apabila suatu koefisien bernilai 0, lewati koefisien tersebut dan lanjutkan ke koefisien selanjutnya
// Jika seluruh koefisien bernilai 0, keluarkan "0"
void Polinom::print() {
    bool non0idx = -1;
    for (int i = 0; i <= this->derajat; i++) {
        if (this->koef[i] != 0) {
            non0idx = i;
            break;
        }
    }

    if (non0idx == -1) {
        cout << 0;
    } else {
        cout << this->koef[non0idx];
        for (int i = non0idx + 1; i <= this->derajat; i++) {
            if (this->koef[i] != 0) {
                cout << (this->koef[i] > 0 ? '+' : '-') << (this->koef[i] > 0 ? this->koef[i] : -1 * this->koef[i]) << "x^" << i;
            }
        }
    }
    cout << endl;
}
