/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 17 Mei 2023
   	Topik		: Ujian Praktikum 2
   	Deskripsi	: Email */

public class Email implements Observer {
    private int id;

    public Email(int id) {
        this.id = id;
    }

    @Override
    public void update() {
        System.out.println("Notifying Email with ID-" + id + ": updated!");
    }
}
