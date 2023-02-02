/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 2 Februari 2023
    Topik   : Responsi 1 - Item
*/

#include "Item.hpp"
#include <iostream>
using namespace std;

int Item::totalRevenue = 0;
int Item::totalItems = 0;

Item::Item() : serialNum(Item::totalItems + 1) {
/* Ctor default: stok adalah 0 dan harga barang adalah 0 */
	this->stock = 0;
	this->price = 0;
	this->sold = 0;
	Item::totalItems++;
}

Item::Item(int stock, int price) : serialNum(Item::totalItems + 1) {
	this->stock = stock;
	this->price = price;
	this->sold = 0;
	Item::totalItems++;
}

Item::Item(const Item& other) : serialNum(Item::totalItems + 1) {
/* cctor item, mengkopi seluruh atribut item, termasuk atribut sold */
	this->stock = other.stock;
	this->price = other.price;
	this->sold = other.sold;
	totalItems++;
}

Item::~Item() {

}
	
int Item::getSerialNum() const {
	return this->serialNum;
}

int Item::getSold() const {
	return this->sold;
}

int Item::getPrice() const {
	return this->price;
}

void Item::addStock(int addedStock) {
/* Menambahkan stok item. Tidak akan bernilai negatif. */
	this->stock += addedStock;
}

void Item::sell(int soldStock) {
/* Menjual item. Jika item tidak cukup, maka item terjual hanya sampai stok item habis */
	if (this->stock >= soldStock) {
		this->stock -= soldStock;
		this->sold += soldStock;
		Item::totalRevenue += soldStock * this->price;
	} else {
		Item::totalRevenue += this->stock * this->price;
		this->sold += this->stock;
		this->stock = 0;
	}
}

void Item::setPrice(int newPrice) {
	this->price = newPrice;
}