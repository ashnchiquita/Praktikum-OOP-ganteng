/*  NIM      : 13521129
    Nama     : Chiquita Ahsanunnisa
    Tanggal  : 23 Februari 2023
    Topik    : Praktikum 2 - Inheritance 
    Deskripsi: 2 */

#include "ExplodableBarrel.hpp"

// Default Constructor
// health dari ExplodableBarrel selalu 1 dan
// default radiusnya adalah 5
ExplodableBarrel::ExplodableBarrel() : Damageable(1), Explodable() {
    this->radius = 5;
}

// Masukan: radius (integer positif) dan baseDamage (integer positif)
// health dari ExplodableBarrel selalu 1
ExplodableBarrel::ExplodableBarrel(int r, int b) : Damageable(1), Explodable(b) {
    this->radius = r;
}

// Masukan: damage (integer positif) dan element (string)
//
// Berikut adalah urutan aksi yang dilakukan:
//
// Apabila barrel telah hancur, maka tidak akan terjadi
// apa-apa.
//
// Barrel menerima damage dan tidak menghiraukan element.
// Apabila barrel hancur setelah menerima damage, maka
// barrel akan meledak sebesar radius yang telah ditentukan.
void ExplodableBarrel::takeDamage(int d, string s) {
    if (!this->isDestroyed()) {
        this->Damageable::takeDamage(d);
        if (this->isDestroyed()) {
            this->explode(this->radius);
        }
    }
}

