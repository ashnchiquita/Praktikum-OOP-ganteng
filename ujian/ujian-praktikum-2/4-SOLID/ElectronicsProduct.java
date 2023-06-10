/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 17 Mei 2023
   	Topik		: Ujian Praktikum 2
   	Deskripsi	: Electronics Product */

public class ElectronicsProduct extends Product implements HasTax {
    public ElectronicsProduct(String name, double price) {
        super(name, price);
    }

    // Override metode calculateTax()
    @Override
    public double calculateTax() {
        return super.getPrice() * 0.2; // Pajak khusus untuk produk elektronik, ganti pake interface
    }
}
