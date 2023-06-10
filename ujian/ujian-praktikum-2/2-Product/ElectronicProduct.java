/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 17 Mei 2023
   	Topik		: Ujian Praktikum 2
   	Deskripsi	: Electronic Product */

public class ElectronicProduct extends Product {
    protected String warrantyPeriod;

    public ElectronicProduct(int id, String name, int price, String description, String warrantyPeriod) {
        super(id, name, price, description);
        this.warrantyPeriod = warrantyPeriod;
    }

    public String getWarrantyPeriod() {
        return warrantyPeriod;
    }

    public String getInfo() {
        return super.id + ": " + super.name + " - " + super.price + " - " + warrantyPeriod + " - " + super.description;
    }
}
