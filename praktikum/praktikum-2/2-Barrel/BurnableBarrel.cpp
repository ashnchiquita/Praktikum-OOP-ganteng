/*  NIM      : 13521129
    Nama     : Chiquita Ahsanunnisa
    Tanggal  : 23 Februari 2023
    Topik    : Praktikum 2 - Inheritance 
    Deskripsi: 2 - Barrel*/

#include "BurnableBarrel.hpp"

// Default Constructor
BurnableBarrel::BurnableBarrel() : Damageable(), Burnable() {}

// Masukan: health (integer positif)
BurnableBarrel::BurnableBarrel(int h) : Damageable(h), Burnable() {}

// Masukan: damage (integer positif) dan element (string)
//
// Berikut adalah urutan aksi yang dilakukan:
//
// Apabila barrel telah hancur, maka tidak akan terjadi
// apa-apa.
//
// Apabila barrel menerima damage element berupa "fire",
// maka akan mengaktifkan status burned. Apabila barrel
// menerima damage element berupa "water", maka status
// burned akan dinonaktifkan.
//
// Setelah update status burned, Jika barrel dalam kondisi
// burned, maka damagenya akan dikalikan dengan konstanta
// multiplier. Jika tidak, maka damagenya tidak berubah.
void BurnableBarrel::takeDamage(int d, string s) {
    if (!this->isDestroyed()) {
        if (s == "fire") {
            this->burn();
        } else if (s == "water") {
            this->watered();
        }

        if (this->isBurned()) {
            this->Damageable::takeDamage(d * this->multiplier);
        } else {
            this->Damageable::takeDamage(d);
        }
    }
}