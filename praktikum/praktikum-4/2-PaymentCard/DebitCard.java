/*  NIM         : 13521129
    Nama        : Chiquita Ahsanunnisa
    Tanggal     : 30 Maret 2023
    Topik       : Praktikum 4
    Deskripsi   : Debit Card */

class DebitCard implements IPaymentMethod {
    double balance;

    // Inisialisasi balance menjadi 0
    public DebitCard() { balance = 0; }

    // Getter
    public double getBalance() { return balance; }

    // Menambahkan amount ke balance
    // Mengembalikan true
    public boolean deposit(double amount) {
        balance += amount;
        return true;
    }

    // Mengurangi amount dari balance
    // Mengembalikan false apabila amount melebihi balance
    public boolean withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true;
        } else {
            return false;
        }
    }

    // Mengurangi amount dari balance
    // Mengembalikan false apabila amount melebihi balance
    public boolean pay(double price) {
        return withdraw(price);
    }
}