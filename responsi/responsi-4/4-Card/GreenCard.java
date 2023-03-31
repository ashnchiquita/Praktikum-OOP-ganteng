/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 16 Maret 2023
   	Topik		: Responsi 4
   	Deskripsi	: Green Card */

public class GreenCard extends Card {
    public GreenCard() { super(); }

    public GreenCard(Double number) { super(number); }

    public void printInfo() { System.out.println("Kartu Hijau: " + number); }

    public Double value() { return number * 10 + 1; }
}
