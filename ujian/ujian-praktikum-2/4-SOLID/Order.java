/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 17 Mei 2023
   	Topik		: Ujian Praktikum 2
   	Deskripsi	: Order */

public class Order {
    private ShoppingCart shoppingCart; // buat kelas
    private Payment paymentMethod;

    public Order(ShoppingCart shoppingCart, Payment paymentMethod) {
        this.shoppingCart = shoppingCart;
        this.paymentMethod = paymentMethod;
    }

    public void checkout() {
        double totalPrice = shoppingCart.calculateTotalPrice();
        paymentMethod.pay(totalPrice);
    }
}
