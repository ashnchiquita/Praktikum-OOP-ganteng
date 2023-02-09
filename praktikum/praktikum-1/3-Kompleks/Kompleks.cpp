/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 9 Februari 2023
   	Topik		: Praktikum 1
   	Deskripsi	: Kompleks */

#include "Kompleks.h"
#include <iostream>
using namespace std;

int Kompleks::n_kompleks = 0;

// ctor tanpa parameter
// inisialisasi seluruh koefisien dengan nilai 0
Kompleks::Kompleks() {
	this->real = 0;
	this->imaginer = 0;
	n_kompleks++;
}

// ctor dengan parameter
Kompleks::Kompleks(int real, int imaginer) {
	this->real = real;
	this->imaginer = imaginer;
	n_kompleks++;
}

// mengembalikan bagian riil
int Kompleks::GetReal() const {
	return this->real;
}

// mengembalikan bagian imaginer
int Kompleks::GetImaginer() const {
	return this->imaginer;
}

// mengisi bagian riil
void Kompleks::SetReal(int val) {
	this->real = val;
}

// mengisi bagian imaginer
void Kompleks::SetImaginer(int val) {
	this->imaginer = val;
}

// operator overloading

// operator+ untuk melakukan penjumlahan dengan rumus berikut
// (a + bi) + (c + di) = (a+c) + (b+d)i
Kompleks operator+ (const Kompleks& k1, const Kompleks& k2) {
	return Kompleks(k1.real + k2.real, k1.imaginer + k2.imaginer);
}

// operator- untuk melakukan pengurangan dengan rumus berikut
// (a + bi) − (c + di) = (a−c) + (b−d)i
Kompleks operator- (const Kompleks& k1, const Kompleks& k2) {
	return Kompleks(k1.real - k2.real, k1.imaginer - k2.imaginer);
}

// operator* untuk melakukan perkalian dengan rumus berikut
// (a + bi)(c + di) = ac + bci + adi + bd i^2 = (ac−bd) + (bc+ad)i
Kompleks operator* (const Kompleks& k1, const Kompleks& k2) {
	return Kompleks(k1.real * k2.real - k1.imaginer * k2.imaginer, k1.imaginer * k2.real + k1.real * k2.imaginer);
}

// operator* untuk mengkalikan bilangan kompleks dengan konstanta
// (a + bi)(c) = (ac) + (bc)i
Kompleks operator* (const Kompleks& kom, const int c) {
	return Kompleks(c * kom.real, c * kom.imaginer);
}

// operator* untuk mengkalikan bilangan kompleks dengan konstanta (sifat komutatif)
Kompleks operator* (const int c, const Kompleks& kom) {
	return Kompleks(c * kom.real, c * kom.imaginer);
}

// mengembalikan jumlah instance yang pernah dibuat
int Kompleks::CountKompleksInstance() {
	return n_kompleks;
}

// mencetak bilangan kompleks ke layar, diakhiri dengan end-of-line 
// contoh:
// 3+5i
// 0+0i
// -5-4i
void Kompleks::Print() {
	cout << this->real << (this->imaginer < 0 ? '-' : '+') << (this->imaginer < 0 ? -1 * this->imaginer : this->imaginer) << 'i' << endl;
}