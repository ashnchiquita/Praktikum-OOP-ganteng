/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 31 Maret 2023
    Topik   : Latihan Java Inheritance - Main.java
*/

public class Main {
    public static void main(String[] args) {
        KoleksiKendaraan kk = new KoleksiKendaraan(10);
        Kendaraan x = new Mobil(1,2,"ford","coki");
        Kendaraan y = new Bus(3,4,"hyundai",10);
        Kendaraan z = new Minibus(5,6,"minihyundai");

        kk.insert(x);
        kk.insert(y);
        kk.insert(z);

        System.out.println("Ctor");
        kk.printAll();

        System.out.println("Clone");
        KoleksiKendaraan cp = KoleksiKendaraan(kk);
        cp.printAll();

        System.out.println("Assign");
        KoleksiKendaraan as;
        as = cp;
        as.printAll();

        System.out.println("Biaya sewa x : " + x.biayaSewa(10));
        System.out.println("Biaya sewa y : " + y.biayaSewa(10));
        System.out.println("Biaya sewa z : " + z.biayaSewa(10));
    }
}
