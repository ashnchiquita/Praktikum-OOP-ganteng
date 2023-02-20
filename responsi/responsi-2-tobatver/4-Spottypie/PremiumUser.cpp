#include "PremiumUser.h"
#include <iostream>
using namespace std;

//ctor, active = true, parameter: nama pengguna
PremiumUser::PremiumUser(char* s) {

}

// cctor
// implementasikan jika diperlukan, 
// jika tidak diperlukan, hapus cctor
// jika perlu diimplementasikan, print "Premium User Copied<endl>"
PremiumUser::PremiumUser(const PremiumUser&) { 

}

// dtor; implementasikan jika diperlukan
// jika tidak diperlukan, hapus dtor
// jika diperlukan
// selain implementasi, print juga "Premium user <nama user> deleted<endl>"
// Contoh:
// Premium user A deleted
PremiumUser::~PremiumUser() {

}


// print kata-kata sbg. berikut: "Music Downloaded: <judul><endl>"
// Contoh: 
// Music Downloaded: Loyal - Chris Brown, Lil Wayne, Tyga
//
// Jika akun premium tidak aktif, print: "Activate premium account to download music<endl>"
void PremiumUser::downloadMusic(char*) {

}
void PremiumUser::inactivatePremium() {

}
void PremiumUser::activatePremium() {
    
}

int PremiumUser::getNumOfMusicDownloaded() const {

}

// mengembalikan nilai active
bool PremiumUser::getPremiumStatus() const {

}