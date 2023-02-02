/*  NIM		  : 13521129
	  Nama	  : Chiquita Ahsanunnisa
	  Tanggal	: 2 Februari 2023
	  Topik	  : Responsi 1 - Penggunaan Kelas 1
*/

#include "A.hpp"

int main() {
	A * c1 = new A('1');
	A * c2 = new A('2');
	A * cc1 = new A(* c1);

	*c1 = *c2;

	c2->show();

	delete c2;
	delete c1;
	delete cc1;
	return 0;
}