/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 17 Mei 2023
   	Topik		: Ujian Praktikum 2
   	Deskripsi	: SMS */

public class SMS implements Observer {
    private int id;

    public SMS(int id) {
        this.id = id;
    }

    @Override
    public void update() {
        System.out.println("Notifying SMS with ID-" + id + ": updated!");
    }
}
