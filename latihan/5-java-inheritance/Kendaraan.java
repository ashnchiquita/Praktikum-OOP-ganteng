/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 31 Maret 2023
    Topik   : Latihan Java Inheritance - Kendaraan.java
*/

public abstract class Kendaraan {
    private int nomor, tahun;
    private String merk;

    // CTOR
    public Kendaraan() {
        nomor = 0;
        tahun = 0;
        merk = "XXX";
    }

    public Kendaraan(int nomor, int tahun, String merk) {
        this.nomor = nomor;
        this.tahun = tahun;
        this.merk = merk;
    }

    // OTHERS
    public int getNomor() { return nomor; }
    public int getTahun() { return tahun; }
    public String getMerk() { return merk; }
    public void printInfo() {
        System.out.println("Nomor          : " + nomor);
        System.out.println("Tahun Keluaran : " + tahun);
        System.out.println("Merk           : " + merk);
    }
    abstract public int biayaSewa(int lamaSewa);
}
