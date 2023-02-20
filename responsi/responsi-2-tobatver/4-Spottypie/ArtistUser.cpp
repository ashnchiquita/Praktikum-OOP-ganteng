#include "ArtistUser.h"
#include <iostream>
using namespace std;

//ctor, parameter: nama pengguna
ArtistUser::ArtistUser(char*) {

}

// cctor
ArtistUser::ArtistUser(const ArtistUser&) {

}

// dtor
// selain implementasi, print juga "Artist user <nama user> deleted"
// Contoh:
// Artist user A deleted
ArtistUser::~ArtistUser() {

}

// Asumsi: musik unik, parameter: judul musik
void ArtistUser::uploadMusic(char*) {

}

void ArtistUser::deleteUploadedMusic(char*) {

}

// format print:
// <No>. <Judul musik><endl>
// contoh:
// 1. Starship - Nicki Minaj
// 2. To Be Human - Sia, Labrinth
//
// jika tidak ada musik, print: "No music uploaded<endl>"
void ArtistUser::viewUploadedMusicList() const {

}

int ArtistUser::getNumOfMusicUploaded() const {

}

int ArtistUser::getNumOfArtist() {

}