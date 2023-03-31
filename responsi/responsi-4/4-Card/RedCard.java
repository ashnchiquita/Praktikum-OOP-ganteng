/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 16 Maret 2023
   	Topik		: Responsi 4
   	Deskripsi	: Red Card */

public class RedCard extends Card {
    public RedCard() { super(); }

    public RedCard(Double number) { super(number); }

    public void printInfo() { System.out.println("Kartu Merah: " + number); }

    public Double value() { return number * 10 + 4; }
}
