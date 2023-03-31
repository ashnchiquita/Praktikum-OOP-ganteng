/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 16 Maret 2023
   	Topik		: Responsi 4
   	Deskripsi	: Mata Kuliah */

import java.lang.Comparable;

class MataKuliah implements Comparable<MataKuliah> {
    private String nama;
    private int kodeJurusan, tahunPengambilan;
    private float rating;

    public MataKuliah(String nama, int kodeJurusan, int tahunPengamilan, float rating) {
        this.nama = nama;
        this.kodeJurusan = kodeJurusan;
        this.tahunPengambilan = tahunPengamilan;
        this.rating = rating;
    }

    public String getNama() { return nama; }

    public int getKodeJurusan() { return kodeJurusan; }

    public int getTahunPengambilan() { return tahunPengambilan; }

    public int compareTo(MataKuliah m) {
        // MataKuliah A disebut kurang dari MataKuliah B bila:
        // kode jurusan MataKuliah A lebih kecil dari MataKuliah B
        // kode jurusan MataKuliah A sama dengan MataKuliah B, tapi tahun pengambilannya lebih kecil
        // kode jurusan dan tahun pengambilan MataKuliah A sama dengan MataKuliah B, tapi rating nya lebih kecil
        if ((this.kodeJurusan < m.kodeJurusan) || (this.kodeJurusan == m.kodeJurusan && this.tahunPengambilan < m.tahunPengambilan) || (this.kodeJurusan == m.kodeJurusan && this.tahunPengambilan == m.tahunPengambilan && this.rating < m.rating)) {
            return -1;
        } else if (this.kodeJurusan == m.kodeJurusan && this.tahunPengambilan == m.tahunPengambilan && this.rating == m.rating) {
            return 0;
        } else {
            return 1;
        }
    }
}
