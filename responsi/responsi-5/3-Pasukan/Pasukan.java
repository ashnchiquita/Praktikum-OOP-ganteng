/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 6 April 2023
   	Topik		: Responsi 5
   	Deskripsi	: Pasukan */

import java.util.List;

public class Pasukan {
    private List<Integer> list;
    private int n;

    public Pasukan(List<Integer> list, int n) {
        this.list = list;
        this.n = n;
    }

    public void reset() {
        list.clear();
        for (int i = 0; i < n; i++) {
            list.add(0);
        }
    }

    public long get(int idx) {
        reset();
        long start = Util.getTime();
        list.get(idx);
        long fin = Util.getTime();
        return fin - start;
    }

    public long del(int idx, int t) {
        reset();
        long start = Util.getTime();
        for (int i = 0; i < t; i++) {
            list.remove(idx);
        }
        long fin = Util.getTime();
        return fin - start;
    }
}
