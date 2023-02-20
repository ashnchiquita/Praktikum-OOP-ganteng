#include "PremiumUser.h"

//ctor, active = true, parameter: nama pengguna
PremiumUser::PremiumUser(char*);

// cctor
PremiumUser::PremiumUser(const PremiumUser&); // implementasikan jika diperlukan, 
// jika tidak diperlukan, hapus cctor
// jika perlu diimplementasikan, print "Premium User Copied<endl>"

// dtor; implementasikan jika diperlukan
PremiumUser::~PremiumUser();
// jika tidak diperlukan, hapus dtor
// jika diperlukan
// selain implementasi, print juga "Premium user <nama user> deleted<endl>"
// Contoh:
// Premium user A deleted

// print kata-kata sbg. berikut: "Music Downloaded: <judul><endl>"
// Contoh: 
// Music Downloaded: Loyal - Chris Brown, Lil Wayne, Tyga
//
// Jika akun premium tidak aktif, print: "Activate premium account to download music<endl>"
void PremiumUser::downloadMusic(char*);
void PremiumUser::inactivatePremium();
void PremiumUser::activatePremium();

int PremiumUser::getNumOfMusicDownloaded() const;

// mengembalikan nilai active
bool PremiumUser::getPremiumStatus() const;