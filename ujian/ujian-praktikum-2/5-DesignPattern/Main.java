/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 17 Mei 2023
   	Topik		: Ujian Praktikum 2
   	Deskripsi	: Main */

public class Main {
    // untuk testing
    public static void main(String[] args) {
        Subject publisher = new Subject();

        // adding
        publisher.addObserver(new SMS(1));
        publisher.addObserver(new Email(1));
        publisher.addObserver(new PushNotification(1));
        publisher.addObserver(new Email(2));
        publisher.addObserver(new SMS(3));
        publisher.addObserver(new Email(5));

        // notifying
        publisher.notifyObservers();
    }
}
