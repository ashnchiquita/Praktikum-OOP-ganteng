/*  NIM         : 13521129
    Nama        : Chiquita Ahsanunnisa
    Tanggal     : 30 Maret 2023
    Topik       : Praktikum 4
    Deskripsi   : Barang */

class Barang {
    private String Nama;
    private int Amount;

    public Barang(String Nama, int Amount) {
        this.Nama = Nama;
        this.Amount = Amount;
    }
    
    public String getNama() { return Nama; }
    public int getAmount() { return Amount; }
    public String toString() {
        return Amount + " " + Nama;
    }
}