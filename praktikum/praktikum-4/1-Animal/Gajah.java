/*  NIM         : 13521129
    Nama        : Chiquita Ahsanunnisa
    Tanggal     : 30 Maret 2023
    Topik       : Praktikum 4
    Deskripsi   : Gajah */

public class Gajah extends Animal {
    private int basePower, age;

    public Gajah(int basePower, int age) {
        super(4);
        this.basePower = basePower;
        this.age = age;
    }

    public int getBasePower() {
        return basePower;
    }

    public int getAge() {
        return age;
    }

    public int getAnimalPower() {
        return 3 * (basePower + age + (int) this.children);
    }
}