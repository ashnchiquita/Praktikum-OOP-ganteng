/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 31 Maret 2023
    Topik   : Latihan Java Inheritance - Minibus.java
*/

public class Minibus extends Kendaraan {
    // CTOR
    public Minibus() { super(); }
    public Minibus(int nomor, int tahun, String merk) {
        super(nomor, tahun, merk);
    }

    // OTHERS
    public int diskon(int lamaSewa) {
        return (lamaSewa > 10 ? biayaSewa(lamaSewa) / 10 : 0);
    }
    @Override
    public void printInfo() {
        super.printInfo();
        System.out.println("Kategori     : Minibus");
    }
    @Override
    public int biayaSewa(int lamaSewa) {
        return (lamaSewa <= 5 ? 5000000 : 5000000 + 500000 * (lamaSewa - 5));
    }
}
