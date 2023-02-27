/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Latihan 4 Sekawan - main.cpp
*/

#include "Kendaraan.hpp"
#include "KoleksiKendaraan.hpp"

int main() {
    KoleksiKendaraan kk(10);
    Kendaraan * x = new Kendaraan(1,2,"mobil","ford");
    Kendaraan * y = new Kendaraan(3,4,"minibus","hyundai");
    Kendaraan * z = new Kendaraan(5,6,"bus","minihyundai");

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