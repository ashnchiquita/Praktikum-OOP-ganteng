/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 31 Maret 2023
    Topik   : Latihan Java Inheritance - Mobil.java
*/

public class Mobil extends Kendaraan {
    private String supir;

    // CTOR
    public Mobil() {
        super();
        supir = "XXXX";
    }
    public Mobil(int nomor, int tahun, String merk, String supir) {
        super(nomor, tahun, merk);
        this.supir = supir;
    }
    public Mobil(Mobil other) {
        super(other.getNomor(), other.getTahun(), other.getMerk());
        this.supir = other.supir;
    }

    // OTHERS
    @Override
    public void printInfo() {
        super.printInfo();
        System.out.println("Kategori       : Mobil");
        System.out.println("Supir          : " + supir);
    }
    @Override
    public int biayaSewa(int lamaSewa) { return 500000 * lamaSewa; }
    @Override
    public Kendaraan copy() { return new Mobil(this); }
}
