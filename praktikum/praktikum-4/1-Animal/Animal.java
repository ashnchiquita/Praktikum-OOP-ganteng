/*  NIM         : 13521129
    Nama        : Chiquita Ahsanunnisa
    Tanggal     : 30 Maret 2023
    Topik       : Praktikum 4
    Deskripsi   : Animal */

public abstract class Animal implements Comparable<Animal> {
    protected int numberOfLegs;
    protected long children;

    public Animal(int i) { numberOfLegs = i; }
    public int getNumberOfLegs() { return numberOfLegs; }
    public long getNumberOfChildren() { return children; }
    public void increaseChild(int inc) { children += inc; }
    abstract public int getAnimalPower();
  public int compareTo(Animal a) {
    // compareTo mengembalikan:
    // 0 bila this sama dengan m
    // 1 bila this lebih dari m
    // -1 bila this kurang dari m
    if (this.getAnimalPower() > a.getAnimalPower()) {
        return 1;
    } else if (this.getAnimalPower() == a.getAnimalPower()) {
        return 0;
    } else {
        return -1;
    }
  }
}
