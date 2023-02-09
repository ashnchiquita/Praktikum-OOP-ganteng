/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 9 Februari 2023
   	Topik		: Praktikum 1
   	Deskripsi	: Paper */

#include "Paper.hpp"

int main() {
	Paper a('A'), b('B'), c('C');
	Paper cC(c);
	a.fold();
	b.fold();
	c.fold();
	c.glue();
	c.setName('X');
	cC.fold();
	cC.glue();
	return 0;
}