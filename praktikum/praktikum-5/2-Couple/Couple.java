/*  NIM       : 13521129
    Nama      : Chiquita Ahsanunnisa
    Tanggal   : 13 April 2023
    Deskripsi : Praktikum 5 - Couple */

// Kelas Couple adalah kelas generik dengan dua parameter type K dan V
class Couple<K,V> {
    // dengan dua atribut generik <K> dan <V> adalah private:
    // <K> key
    // <V> value
    private K key;
    private V value;

    // semua method adalah public:
    // Constructor
    public Couple(K key, V value) {
        this.key = key;
        this.value = value;
    }

    ////// getter dan setter
    // sebuah fungsi dengan nama getKey mengirimkan K
    public K getKey() { return key; }
    // sebuah fungsi dengan nama getVal mengirimkan V
    public V getVal() { return value; }
    // sebuah prosedur bernama setKey dengan parameter K
    public void setKey(K key) { this.key = key; }
    // sebuah prosedur bernama setVal dengan parameter V
    public void setVal(V val) { this.value = val; }

    // fungsi membandingkan, dengan sebuah parameter bertype Couple
    // untuk membandingkan parameter yang diberikan dengan nilai yang disimpan this (current object)
    // dua buah Couple dikatakan sama jika nilai key sama dan nilai value sama
    // mengirim true jika couple sama dengan nilai yang disimpan this
    public boolean isEqual(Couple<K,V> C) {
        return this.key == C.key && this.value == C.value;
    }

    // didefinisikan juga "nearEQ", predikat yang menentukan "ukuran kesamaan" dua buah Couple
    // fungsi mengembalikan 0 jika kedua atribut berbeda
    // mengembalikan 1 jika Key sama namun Value berbeda
    // mengembaikan 2 jika Value sama namun Key berbeda
    // mengembalikan 3 jika Key dan Value sama
    public int nearEQ(Couple<K,V> couple) {
        if (this.key == couple.key) {
            if (this.value == couple.value) {
                return 3;
            } else {
                return 1;
            }
        } else {
            if (this.value == couple.value) {
                return 2;
            } else {
                return 0;
            }
        }
    }
}
