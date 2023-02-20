/*  NIM     : 13521129
    name    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Latihan Inheritance - main.cpp
*/

#include "Kendaraan.hpp"
#include "Bus.hpp"
#include "Minibus.hpp"
#include "Mobil.hpp"
#include "KoleksiKendaraan.hpp"

int main() {
    KoleksiKendaraan kk(10);
    Kendaraan * x = new Mobil(1,2,"ford","coki");
    Kendaraan * y = new Bus(3,4,"hyundai",10);
    Kendaraan * z = new Minibus(5,6,"minihyundai");

    kk << *x;
    kk << *y;
    kk << *z;
    cout << "Ctor" << endl;
    kk.printAll();
    KoleksiKendaraan cp = KoleksiKendaraan(kk);
    cout << "Cctor" << endl;
    cp.printAll();
    cout << "Assign" << endl;
    KoleksiKendaraan as;
    as = cp;
    as.printAll();

    cout << x->biayaSewa(10) << endl;
    cout << y->biayaSewa(10) << endl;
    cout << z->biayaSewa(10) << endl;

    delete x;
    delete y;
    delete z;
    return 0;
}