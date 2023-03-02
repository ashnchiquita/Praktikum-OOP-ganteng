/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 2 Maret 2023
   	Topik		: Responsi 3
   	Deskripsi	: Generic Function */

#include <iostream>
using namespace std;

template <class T1, class T2>
void func(T1 param1, T2 param2) {
	cout << "Masukan Anda: " << param1 << " dan " << param2 << ", mungkin memiliki tipe yang berbeda" << endl;
}

template <class T>
void func(T param1, T param2) {
	cout << "Masukan Anda: " << param1 << " dan " << param2 << ", memiliki tipe yang sama" << endl;
}

template <>
void func<char,int>(char param1, int param2) {
	for (int i = 0; i < param2; i++) {
		cout << param1 << endl;
	}
}