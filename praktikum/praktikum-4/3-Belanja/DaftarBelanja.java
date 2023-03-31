/*  NIM         : 13521129
    Nama        : Chiquita Ahsanunnisa
    Tanggal     : 30 Maret 2023
    Topik       : Praktikum 4
    Deskripsi   : Daftar Belanja */

class DaftarBelanja {
    private Barang[] listBelanja;
    private int ptr;

    public DaftarBelanja(int Max) {
        ptr = -1;
        listBelanja = new Barang[Max];
    }

    public void belanja(int lorong, String keterangan) {
        if (ptr < listBelanja.length - 1) {
            ptr++;
            listBelanja[ptr] = new Barang(keterangan + " (lorong " + lorong + ")", 1);
        }
    }

    public void belanja(int lorong, int qty, String keterangan) {
        if (ptr < listBelanja.length - 1) {    
            ptr++;
            listBelanja[ptr] = new Barang(keterangan + " (lorong " + lorong + ")", qty);
        }
    }

    public void belanja(String barang) {
        if (ptr < listBelanja.length - 1) {
            ptr++;
            listBelanja[ptr] = new Barang(barang, 1);
        }        
    }

    public void belanja(String barang, int qty) {
        if (ptr < listBelanja.length - 1) {
            ptr++;
            listBelanja[ptr] = new Barang(barang, qty);
        }        
    }

    public void print() {
        for (int i = 0; i <= ptr; i++) {
            System.out.println((i + 1) + ". " + listBelanja[i].toString());
        }
    }
}