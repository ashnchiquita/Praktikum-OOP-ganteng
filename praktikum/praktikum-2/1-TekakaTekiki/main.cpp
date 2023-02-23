/*  NIM      : 13521129
    Nama     : Chiquita Ahsanunnisa
    Tanggal  : 23 Februari 2023
    Topik    : Praktikum 2 - Inheritance 
    Deskripsi: 1 - Tekaka Tekiki */

// main.cpp
#include "A.hpp"
#include "B.hpp"

int main() {
  B b; /* ANDA HARUS MENGGUNAKAN DEFAULT CONSTRUCTOR */
  b.setValue(10888);
  A* a = &b;
  a->setValue(888);  
  b.print(); // OUTPUT: (888, 10888)
  return 0;
}