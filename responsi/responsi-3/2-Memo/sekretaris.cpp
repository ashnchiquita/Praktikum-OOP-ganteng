/* 	NIM			: 13521129
   	Nama     	: Chiquita Ahsanunnisa
   	Tanggal		: 2 Maret 2023
   	Topik		: Responsi 3
   	Deskripsi	: Sekretaris */

#include "sekretaris.h"
#include <iostream>
using namespace std;

/*
    Membuat objek Sekretaris dengan nilai kertas dan tinta
    default. Besar energi awal adalah ENERGI_MAX
*/
Sekretaris::Sekretaris() {
    this->energi = ENERGI_MAX;
    this->tinta = TINTA_DEFAULT;
    this->kertas = KERTAS_DEFAULT;
    this->memoLength = 0;
    this->memo = new Memo[50];
}

/*
    Membuat objek Sekretaris dengan nilai kertas dan tinta
    sesuai yang diberikan. Besar energi awal adalah ENERGI_MAX
*/
Sekretaris::Sekretaris(int kertas, int tinta) {
    this->energi = ENERGI_MAX;
    this->tinta = tinta;
    this->kertas = kertas;
    this->memoLength = 0;
    this->memo = new Memo[50];
}

/*
    Dealokasi variabel-variabel yang perlu didealokasi.
    Jika tidak perlu, hapus metode ini.
*/
Sekretaris::~Sekretaris() {
    delete[] this->memo;
}


/*
    Membuat memo dengan isi sesuai yang diberikan. Metode ini
    menggunakan metode pakaiKertas, pakaiTinta, dan pakaiEnergi.
    Untuk membuat 1 memo akan menghabiskan 1 kertas, 1 energi,
    dan tinta sebanyak jumlah karakter pesan.

    Ada beberapa penyebab memo gagal dibuat, yaitu:
    - Jika kertas habis, akan mengeluarkan pesan dari exception,
        ditambah dengan ", segera isi kertas"
    - Jika tinta kurang, akan mengeluarkan pesan dari exception,
        ditambah dengan ", segera isi tinta"
    - Jika energi habis, akan mengeluarkan pesan dari exception,
        ditambah dengan ", segera istirahat"
    - Jika pesan terlalu panjang, akan mengeluarkan pesan dari
        exception, ditambah dengan ", perpendek pesannya"

    Jika memo gagal dibuat, maka tinta, kertas, dan energi tidak
    berkurang. Gunakan metode batalPakaiKertas, batalPakaiTinta,
    dan batalPakaiEnergi.

    Jika berhasil, maka memo akan dimasukkan ke daftar memo serta
    menampilkan pesan "Memo [<nomor_memo>] untuk <untuk> berhasil
    dibuat"

    Keterangan:
    <...> -> ganti dengan nilai yang sesuai.
*/
void Sekretaris::buatMemo(string pesan, string untuk) {
    try {
        this->pakaiKertas();
    } catch (KertasHabisException& e){
        cout << e.what() << ", segera isi kertas" << endl;
        return;
    }

    try {
        this->pakaiTinta(pesan.length());
    } catch (TintaKurangException& e) {
        cout << e.what() << ", segera isi tinta" << endl;
        this->batalPakaiKertas();
        return;
    }

    try {
        this->pakaiEnergi();
    } catch (EnergiHabisException& e) {
        cout << e.what() << ", segera istirahat" << endl;
        this->batalPakaiKertas();
        this->batalPakaiTinta(pesan.length());
        return;
    }

    try {
        Memo temp = Memo(pesan, untuk);
        this->memo[this->memoLength] = temp;
        this->memoLength++;
        cout << "Memo [" << this->memoLength << "] untuk " << untuk << " berhasil dibuat" << endl;
    } catch (PesanKepanjanganException& e) {
        cout << e.what() << ", perpendek pesannya" << endl;
        this->batalPakaiKertas();
        this->batalPakaiTinta(pesan.length());
        this->batalPakaiEnergi();
        return;
    }
}

/*
    Menggunakan 1 kertas.

    Jika kertas tidak cukup, maka metode ini akan melemparkan
    KertasHabisException dan tidak ada kertas yang digunakan.
*/
void Sekretaris::pakaiKertas() {
    if (this->kertas < 1) {
        throw KertasHabisException();
    }
    this->kertas--;
}

/*
    Menggunakan tinta sebanyak num.

    Jika tinta tidak cukup, maka metode ini akan melemparkan
    TintaKurangException dan tidak ada tinta yang digunakan.
*/
void Sekretaris::pakaiTinta(int num) {
    if (this->tinta < num) {
        throw TintaKurangException();
    }
    this->tinta -= num;
}

/*
    Menggunakan 1 energi.

    Jika energi tidak cukup, maka metode ini akan melemparkan
    EnergiHabisException dan tidak ada energi yang digunakan.
*/
void Sekretaris::pakaiEnergi() {
    if (this->energi < 1) {
        throw EnergiHabisException();
    }
    this->energi--;
}

/*
    Membatalkan penggunaan 1 kertas.
*/
void Sekretaris::batalPakaiKertas() {
    this->kertas++;
}

/*
    Membatalkan penggunaan tinta sebanyak num.
*/
void Sekretaris::batalPakaiTinta(int num) {
    this->tinta += num;
}

/*
    Membatalkan penggunaan 1 energi.
*/
void Sekretaris::batalPakaiEnergi() {
    this->energi++;
}

/*
    Menambahkan jumlah tinta sebanyak num.
*/
void Sekretaris::isiTinta(int num) {
    this->tinta += num;
}

/*
    Menambahkan jumlah kertas sebanyak num.
*/
void Sekretaris::isiKertas(int num) {
    this->kertas += num;
}

/*
    Istirahat mengembalikan energi menjadi maksimum.
*/
void Sekretaris::istirahat() {
    this->energi = ENERGI_MAX;
}

/*
    Menampilkan status dari sekretaris. Berikut adalah format tampilan:
    <...> -> tampilkan nilai yang sesuai
    (...) -> komentar, tidak termasuk output

    --------------
    Status
        Energi : <jumlah_energi>
        Tinta : <jumlah_tinta>
        Kertas : <jumlah_kertas>
        Memo : <jumlah_memo>
        (untuk setiap memo ke-i, mulai dari 1)
        Memo [<i>]
            Pesan : <pesan_memo_i>
            Untuk : <untuk_memo_i>
    --------------

    (Output tidak termasuk ---------- di awal dan akhir)
*/
void Sekretaris::printStatus() {
    cout << "Status" << endl;
    cout << "  Energi : " << this->energi << endl;
    cout << "  Tinta : " << this->tinta << endl;
    cout << "  Kertas : " << this->kertas << endl;
    cout << "  Memo : " << this->memoLength << endl;

    for (int i = 0; i < this->memoLength; i++) {
        cout << "    Memo [" << i + 1 << "]" << endl;
        cout << "      Pesan : " << this->memo[i].getPesan() << endl;
        cout << "      Untuk : " << this->memo[i].getUntuk() << endl;
    }
}