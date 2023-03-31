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

    // OTHERS
    public void printAll() {
        for (int i = 0; i < nEff; i++) {
            System.out.println(buffer[i]);
        }
    }
    public void insert(Kendaraan kendaraan) {
        buffer[nEff] = kendaraan;
        nEff++;
    }
    public void insert(KoleksiKendaraan other){
        int batas = (this.buffer.length > nEff + other.nEff ? other.nEff : this.buffer.length - this.nEff);
        for (int i = 0; i < batas; i++) {
            this.buffer[this.nEff + i] = other.buffer[i];
        }
        this.nEff += batas;
    }
}
