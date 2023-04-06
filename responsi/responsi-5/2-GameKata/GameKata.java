/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 6 April 2023
   	Topik		: Responsi 5
   	Deskripsi	: GameKata */

import java.util.HashSet;

public class GameKata {
    public static void run(String[] tito, String[] wiwid) {
        HashSet<String> kata1 = new HashSet<>();
        for (String kata : tito) {
            kata1.add(kata);
        }

        HashSet<String> kata2 = new HashSet<>();
        for (String kata : wiwid) {
            if (kata1.contains(kata)) {
                kata2.add(kata);
            }
        }

        for (String kata : kata2) {
            System.out.println(kata);
        }
    }
}
