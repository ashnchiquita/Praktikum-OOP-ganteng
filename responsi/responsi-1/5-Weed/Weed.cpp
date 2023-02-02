/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 2 Februari 2023
    Topik   : Responsi 1 - Weed
*/

#include "Weed.hpp"
using namespace std;

Weed::Weed() {
// Membuat Weed dengan jumlah kawanan 1
  this->many = 1;
}

Weed::Weed(int n) {
// Membuat Weed dengan jumlah kawanan n
  this->many = n;
}

Weed::Weed(const Weed& b) {
  this->many = b.many;
}

Weed::~Weed() {

}

void Weed::step() {
  for (int i = 0; i < this->many; i++) {
    cout << "kresek...";
  }
  cout << endl;
}