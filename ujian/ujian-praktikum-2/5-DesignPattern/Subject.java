/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 17 Mei 2023
   	Topik		: Ujian Praktikum 2
   	Deskripsi	: Subject */

import java.util.ArrayList;
import java.util.List;

public class Subject {
    // list of observers
    List<Observer> observers = new ArrayList<>();

    public void addObserver(Observer o) {
        observers.add(o);
    }

    public void removeObserver(Observer o) {
        observers.remove(o);
    }

    // notify all observers
    public void notifyObservers() {
        observers.forEach(o -> {
            o.update();
        });
    }
}
