/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 16 Maret 2023
   	Topik		: Responsi 4
   	Deskripsi	: Blue Card */

public class BlueCard extends Card {
    public BlueCard() { super(); }

    public BlueCard(Double number) { super(number); }

    public void printInfo() { System.out.println("Kartu Biru: " + number); }

    public Double value() { return number * 10 + 2; }
}
