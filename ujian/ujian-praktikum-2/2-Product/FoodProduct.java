/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 17 Mei 2023
   	Topik		: Ujian Praktikum 2
   	Deskripsi	: Food Product */

public class FoodProduct extends Product {
    protected String expiryDate;

    public FoodProduct(int id, String name, int price, String description, String expiryDate) {
        super(id, name, price, description);
        this.expiryDate = expiryDate;
    }

    public String getExpiryDate() {
        return expiryDate;
    }

    public String getInfo() {
        return super.id + ": " + super.name + " - " + super.price + " - " + expiryDate + " - " + super.description;
    }
}
