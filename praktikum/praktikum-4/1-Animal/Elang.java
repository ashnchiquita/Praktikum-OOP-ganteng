/*  NIM         : 13521129
    Nama        : Chiquita Ahsanunnisa
    Tanggal     : 30 Maret 2023
    Topik       : Praktikum 4
    Deskripsi   : Elang */

public class Elang extends Animal {
    private int basePower, jumlahTelur;

    public Elang(int basePower) {
        super(2);
        this.basePower = basePower;
        jumlahTelur = 0;
    }

    public int getBasePower() {
        return basePower;
    }

    public int getJumlahTelur() {
        return jumlahTelur;
    }
    
    public void bertelur() {
        jumlahTelur++;
    }

    public int getAnimalPower() {
        return basePower * ((int)children) - jumlahTelur;
    }
}
