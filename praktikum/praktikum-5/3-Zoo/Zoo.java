/*  NIM       : 13521129
    Nama      : Chiquita Ahsanunnisa
    Tanggal   : 13 April 2023
    Deskripsi : Praktikum 5 - Zoo */

import java.io.*;
import java.util.*;

public class Zoo {
    private ArrayList<Enclosure<? extends Animal>> enclosures;
    private float ticketPrice;

    public Zoo() {
        // Inisialisasi this.enclosures dan this.ticketPrice
        enclosures = new ArrayList<Enclosure<? extends Animal>>();
        ticketPrice = 0;
    }

    public void addEnclosure(Enclosure<? extends Animal> enc) {
        // Menambahkan Enclosure enc ke dalam this.enclosures apabila enc tidak kosong
        if (!enc.isEmpty()) {
            enclosures.add(enc);
        }
    }

    public void updateTicketPrice() {
        // Melakukan update terhadap this.ticketPrice dengan rumus sebagai berikut
        // harga tiket baru = 0
        // Untuk setiap Enclosure dalam this.enclosures:
            // Apabila Enclosure bersifat safeForPetting:
            //     harga tiket baru += 1.5 * jumlah animal dalam enclosure
            // else:
            //     harga tiket baru += 1 * jumlah animal dalam enclosure
        ticketPrice = 0;
        for (Enclosure<? extends Animal> enc : enclosures) {
            if (enc.safeForPetting()) {
                ticketPrice += 1.5 * enc.getAnimalCount();
            } else {
                ticketPrice += enc.getAnimalCount();
            }
        }
        //TODO
    }

    public float getTicketPrice() {
        // getter untuk this.ticketPrice
        return ticketPrice;
    }

    public int getTotalAnimalCount() {
        // Mengembalikan jumlah total semua hewan yang ada pada semua enclosure dalam this.enclosures
        int total = 0;
        for (Enclosure<? extends Animal> enc : enclosures) {
            total += enc.getAnimalCount();
        }
        // TODO
        return total;
    }

    public int getEnclosureCount() {
        // Mengembalikan jumlah enclosures dalam this.enclosures
        return enclosures.size();
    }
}
