/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 6 April 2023
   	Topik		: Responsi 5
   	Deskripsi	: Enclosure */

import java.io.*;
import java.util.*;

public class Enclosure {
    private ArrayList<Animal> animals;

    public Enclosure() {
        // Inisialisasi ArrayList animals kosong
        animals = new ArrayList<>();
    }

    public int getAnimalCount() {
        // Mengembalikan jumlah hewan dalam this.animals
        return animals.size();
    }

    public void addAnimal(Animal animal) {
        // menambahkan seekor hewan ke dalam this.animals
        animals.add(animal);
    }

    public Animal getAnimalAt(int i) {
        // mengembalikan hewan dalam this.animals pada index i (tidak mengubah this.animals)
        return animals.get(i);
    }

    public void removeAnimalAt(int i) {
        // menghapus hewan pada this.animals pada index i
        animals.remove(i);
    }

    public boolean isEmpty() {
        // mengembalikan boolean yang menyatakan apakah this.animals kosong atau tidak
        return animals.isEmpty();
    }

    public void describe() {
        // Menuliskan output berikut apabila this.animals kosong:
        // Kandang ini kosong...
        // Apabila tidak kosong menuliskan output serupa dengan output berikut:
        // Kandang berisi 2 ekor hewan:
        // 1. po, spesies Pandamus Maximus, umur 5 tahun
        // 2. po2, spesies Pandamus Maximus, umur 5 tahun
        if (isEmpty()) {
            System.out.println("Kandang ini kosong...");
        } else {
            System.out.println("Kandang berisi " + getAnimalCount() + " ekor hewan:");
            for (int i = 0; i < getAnimalCount(); i++) {
                Animal currAnimal = getAnimalAt(i);
                System.out.println((i + 1) + ". " + currAnimal.getName() + ", spesies " + currAnimal.getSpecies() + ", umur " + currAnimal.getAge() + " tahun");
            }
        }
    }

    public void feed() {
        // Menuliskan output berikut apabila this.animals kosong:
        // Kandang ini kosong...
        // Apabila tidak kosong maka akan memanggil method eat pada tiap animal dalam this.animals
        if (isEmpty()) {
            System.out.println("Kandang ini kosong...");
        } else {
            for (int i = 0; i < getAnimalCount(); i++) {
                getAnimalAt(i).eat();
            }
        }
    }

    public boolean safeForPetting() {
        // mengembalikan true apabila semua hewan dalam this.animals bersifat friendly
        for (Animal currAnimal : animals) {
            if (!currAnimal.isFriendly()) {
                return false;
            }
        }
        return true;
    }
}
