/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 16 Maret 2023
   	Topik		: Responsi 4
   	Deskripsi	: Yellow Card */

public class YellowCard extends Card {
    public YellowCard() { super(); }

    public YellowCard(Double number) { super(number); }

    public void printInfo() { System.out.println("Kartu Kuning: " + number); }

    public Double value() { return number * 10 + 3; }
}
