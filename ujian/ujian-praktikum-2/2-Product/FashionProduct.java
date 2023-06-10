/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 17 Mei 2023
   	Topik		: Ujian Praktikum 2
   	Deskripsi	: Fashion Product */

public class FashionProduct extends Product {
    protected String size;

    public FashionProduct(int id, String name, int price, String description, String size) {
        super(id, name, price, description);
        this.size = size;
    }

    public String getSize() {
        return size;
    }

    public String getInfo() {
        return super.id + ": " + super.name + " - " + super.price + " - " + size + " - " + super.description;
    }
}
