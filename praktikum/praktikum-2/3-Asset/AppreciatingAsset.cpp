/*  NIM      : 13521129
    Nama     : Chiquita Ahsanunnisa
    Tanggal  : 23 Februari 2023
    Topik    : Praktikum 2 - Inheritance 
    Deskripsi: 3 - Asset */
    
#include "AppreciatingAsset.hpp"
#include <math.h>

double AppreciatingAsset::getValue(int years) {
    return this->x->getValue(years) * pow(1 + rate, years);
}