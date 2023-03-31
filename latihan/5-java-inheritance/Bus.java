/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 31 Maret 2023
    Topik   : Latihan Java Inheritance - Bus.java
*/

public class Bus extends Kendaraan {
    private int kapasitas;

    // CTOR
    public Bus() {
        super();
        kapasitas = 0;
    }
    public Bus(int nomor, int tahun, String merk, int kapasitas) {
        super(nomor, tahun, merk);
        this.kapasitas = kapasitas;
    }

    // OTHERS
    @Override
    public void printInfo() {
        super.printInfo();
        System.out.println("Kategori       : Bus");
        System.out.println("Kapasitas      : " + kapasitas);
    }
    @Override
    public int biayaSewa(int lamaSewa) { return 1000000 * lamaSewa; }
}
