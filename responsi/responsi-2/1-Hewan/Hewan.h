/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 19 Februari 2023
    Topik   : Responsi 2 - Hewan
*/

#ifndef HEWAN_H
#define HEWAN_H

#include <string>
#include <iostream>
using namespace std;

class Hewan {
	public:
		Hewan(string nm) {
            name = nm;
        }
        ~Hewan() {
            cout << "Hewan mati " << this->name << endl;
        }
        virtual void print() {
            cout << "Hewan ini namanya " << this->name << endl;
        }
	protected:
		string name;
};

class Kucing : public Hewan {
	public:
		Kucing(string nm) : Hewan(nm) {}
        virtual ~Kucing() {
            cout << "Kucing mati " << this->name << endl;
        }
};

class Anjing : public Hewan {
	public:
		Anjing(string nm) : Hewan(nm) {}
        ~Anjing() {
            cout << "Anjing mati " << this->name << endl;
        }
        void print() {
            cout << "Anjing ini namanya " << this->name << endl;
        }
};

class KucingAnggora : public Kucing {
	public:
		KucingAnggora(string nm, string milik) : Kucing(nm) {pemilik = milik;}
        ~KucingAnggora() {
            cout << "Kucing anggora mati " << this->name << endl;
        }
        void print() {
            cout << "Kucing anggora ini namanya " << this->name << ". Pemiliknya adalah " << this->pemilik << endl;
        }
	private:
		string pemilik;
};

class AnjingBulldog : public Anjing {
	public:
		AnjingBulldog(string nm, string milik) : Anjing(nm) {pemilik = milik;}
        ~AnjingBulldog() {
            cout << "Anjing bulldog mati " << this->name << endl;
        }
        void print() {
            cout << "Anjing bulldog ini namanya " << this->name << ". Pemiliknya adalah " << this->pemilik << endl;
        }
	private:
		string pemilik;
};

#endif