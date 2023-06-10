/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 17 Mei 2023
   	Topik		: Ujian Praktikum 2
   	Deskripsi	: Push Notification */

public class PushNotification implements Observer {
    private int id;

    public PushNotification(int id) {
        this.id = id;
    }

    @Override
    public void update() {
        System.out.println("Notifying PushNotification with ID-" + id + ": updated!");
    }
}
