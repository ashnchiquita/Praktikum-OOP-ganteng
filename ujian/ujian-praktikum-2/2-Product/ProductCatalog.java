/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 17 Mei 2023
   	Topik		: Ujian Praktikum 2
   	Deskripsi	: Product Catalog */

import java.util.ArrayList;
import java.util.List;

public class ProductCatalog implements ProductManagement {
    private List<Product> productList;

    public ProductCatalog() {
        productList = new ArrayList<>();
    }

    public ProductCatalog(List<Product> l) {
        productList = l;
    }

    @Override
    public void addProduct(Product p) {
        productList.add(p);
    }

    @Override
    public Product removeProduct(int id) {
        for (int i = 0; i < productList.size(); i++) {
            if (productList.get(i).getId() == id) {
                return productList.remove(i);
            }
        }
        return null;
    }

    @Override
    public void updateProduct(int id, String name, int price, String description) {
        for (int i = 0; i < productList.size(); i++) {
            Product temp = productList.get(i);
            if (temp.getId() == id) {
                temp.setName(name);
                temp.setPrice(price);
                temp.setDescription(description);
                productList.set(i, temp);
                return;
            }
        }
        System.out.println("Produk dengan id " + id + " tidak ditemukan");
    }

    @Override
    public List<Product> getAllProduct() {
        return productList;
    }

    @Override
    public Product getProduct(int id) {
        for (int i = 0; i < productList.size(); i++) {
            if (productList.get(i).getId() == id) {
                return productList.get(i);
            }
        }
        return null;
    }
}
