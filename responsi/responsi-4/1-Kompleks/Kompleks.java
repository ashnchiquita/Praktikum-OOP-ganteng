/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 16 Maret 2023
   	Topik		: Responsi 4
   	Deskripsi	: Kompleks */

class Kompleks {
    private static int n_kompleks;
    private int real, imaginer;

    // ctor tanpa parameter
    // inisialisasi seluruh koefisien dengan nilai 0
    public Kompleks() {
        real = 0;
        imaginer = 0;
        n_kompleks++;
    }

    // ctor dengan parameter
    public Kompleks(int real, int imaginer) {
        this.real = real;
        this.imaginer = imaginer;
        n_kompleks++;
    }

    //mengembalikan bagian riil
    public int getReal() { return real; }

    // mengembalikan bagian imaginer
    public int getImaginer() { return imaginer; }

    // mengisi bagian riil
    public void setReal(int real) { this.real = real; }

    // mengisi bagian imaginer
    public void setImaginer(int imaginer) { this.imaginer = imaginer; }

    // operator+ untuk melakukan penjumlahan dengan rumus berikut
    // (a + bi) + (c + di) = (a+c) + (b+d)i
    public Kompleks plus(Kompleks b) {
        return new Kompleks(this.real + b.real, this.imaginer + b.imaginer);
    }

    // operator- untuk melakukan pengurangan dengan rumus berikut
    // (a + bi) − (c + di) = (a−c) + (b−d)i
    public Kompleks minus(Kompleks b) {
        return new Kompleks(this.real - b.real, this.imaginer - b.imaginer);
    }

    // operator* untuk melakukan perkalian dengan rumus berikut
    // (a + bi)(c + di) = ac + bci + adi + bd i^2 = (ac−bd) + (bc+ad)i
    public Kompleks multiply(Kompleks b) {
        return new Kompleks(this.real * b.real - this.imaginer * b.imaginer, this.imaginer * b.real + this.real * b.imaginer);
    }

    // operator* untuk mengkalikan bilangan kompleks dengan konstanta
    // (a + bi)(c) = (ac) + (bc)i
    public Kompleks multiply (int c) {
        return new Kompleks(this.real * c, this.imaginer * c);
    }

    // mencetak bilangan kompleks ke layar, diakhiri dengan end-of-line
      // contoh:
      // 3+5i
      // 0
      // 3i
      // -3
      // -5-4i
    public void print() {
        System.out.print(this.real);
        if (this.imaginer > 0) {
            System.out.print("+" + this.imaginer + "i");
        } else if (this.imaginer < 0) {
            System.out.print("-" + (-1) * this.imaginer + "i");
        }
        System.out.print("\n");
    }

    public static int countKompleksInstance() { return n_kompleks; }
}
