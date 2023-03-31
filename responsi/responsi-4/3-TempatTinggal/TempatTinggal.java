/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 16 Maret 2023
   	Topik		: Responsi 4
   	Deskripsi	: Tempat Tinggal */

class TempatTinggal {
    private int luas;
    private double hargaBahanBangunan;

    public TempatTinggal() {
        luas = 0;
        hargaBahanBangunan = 0;
    }

    public TempatTinggal(int luas, double hargaBahanBangunan) {
        this.luas = luas;
        this.hargaBahanBangunan = hargaBahanBangunan;
    }

    public int getLuas() { return luas; }

    public void setLuas(int luas) { this.luas = luas; }

    public double getHargaBahanBangunan() { return hargaBahanBangunan; }

    public void setHargaBahanBangunan(double hargaBahanBangunan) { this.hargaBahanBangunan = hargaBahanBangunan; }

    public double hitungBiayaBangun() { return Double.valueOf(luas) * hargaBahanBangunan; }
}

class Rumah extends TempatTinggal {
    public Rumah() { super(); }

    public Rumah(int luas, double hargaBahanBangunan) { super(luas, hargaBahanBangunan); }

    public Rumah (int lebar, int panjang, double hargaBahanBangunan) { super(lebar * panjang, hargaBahanBangunan); }

    public double hitungBiayaBangun(double biayaOrmas) { return super.hitungBiayaBangun() + Double.valueOf(biayaOrmas); }

    public void setLuas(int lebar, int panjang) { super.setLuas(lebar * panjang); }
}

interface Kendaraan {
    float hitungJarakTempuh();
}

class Karavan extends TempatTinggal implements Kendaraan {
    private float bensin, pemakaianBensin;

    public Karavan() {
        super();
        bensin = 0;
        pemakaianBensin = 0;
    }

    public Karavan(int luas, double hargaBahanBangunan, float bensin, float pemakaianBensin) {
        super(luas, hargaBahanBangunan);
        this.bensin = bensin;
        this.pemakaianBensin = pemakaianBensin;
    }

    public float getBensin() { return bensin; }

    public void setBensin(float bensin) { this.bensin = bensin; }

    public float getPemakaianBensin() { return pemakaianBensin; }

    public void setPemakaianBensin(float pemakaianBensin) { this.pemakaianBensin = pemakaianBensin; }

    @Override
    public double hitungBiayaBangun() { return super.hitungBiayaBangun() * 3; }

    @Override
    public float hitungJarakTempuh() { return bensin * pemakaianBensin; }
}
