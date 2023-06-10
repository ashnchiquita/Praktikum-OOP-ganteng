/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 17 Mei 2023
   	Topik		: Ujian Praktikum 2
   	Deskripsi	: Shopping Cart */

import java.util.ArrayList;
import java.util.List;

public class ShoppingCart {
    private List<Product> shoppingCarts = new ArrayList<>();

    public void addProduct(Product product) { // pindah kelas
        shoppingCarts.add(product);
    }

    public void removeProduct(Product product) { // pindah kelas
        shoppingCarts.remove(product);
    }

    public double calculateTotalPrice() { // pindah kelas
        double total = 0;
        for (Product product : shoppingCarts) {
            total += product.getPrice();
        }
        return total;
    }
}