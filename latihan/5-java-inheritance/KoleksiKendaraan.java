/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 31 Maret 2023
    Topik   : Latihan Java Inheritance - KoleksiKendaraan.java
*/

public class KoleksiKendaraan {
    private Kendaraan[] buffer;
    private int nEff;

    // CTOR
    public KoleksiKendaraan() {
        buffer = new Kendaraan[100];
        nEff = 0;
    }
    public KoleksiKendaraan(int size) {
        buffer = new Kendaraan[size];
        nEff = 0;
    }
    public KoleksiKendaraan(KoleksiKendaraan other) {
        this.nEff = other.nEff;
        this.buffer = new Kendaraan[other.buffer.length];
        for (int i = 0; i < this.nEff; i++) {
            this.buffer[i] = other.buffer[i].copy();
        }
    }

    // OTHERS
    public void printAll() {
        for (int i = 0; i < nEff; i++) {
            buffer[i].printInfo();
            System.out.println("-------------------------------");
        }
    }
    public void insert(Kendaraan kendaraan) {
        buffer[nEff] = kendaraan.copy();
        nEff++;
    }
    public void insert(KoleksiKendaraan other){
        int batas = (this.buffer.length > nEff + other.nEff ? other.nEff : this.buffer.length - this.nEff);
        for (int i = 0; i < batas; i++) {
            this.buffer[this.nEff + i] = other.buffer[i].copy();
        }
        this.nEff += batas;
    }
}
