#include "User.h"
#include <iostream>
using namespace std;

int User::n_user = 0;

// ctor, parameter: nama pengguna
User::User(char* nama) {
    this->name = new char[strlen(nama) + 1];
    strcpy(this->name, nama);
    this->num_of_favourite_music = 0;
    this->music_list = new char*[0];
    n_user++;
}

// cctor
User::User(const User& u) {
    this->name = new char[strlen(u.name) + 1];
    strcpy(this->name, u.name);
    this->num_of_favourite_music = u.num_of_favourite_music;
    this->music_list = new char*[this->num_of_favourite_music];
    for (int i = 0; i < this->num_of_favourite_music; i++) {
        this->music_list[i] = new char[strlen(u.music_list[i]) + 1];
        strcpy(this->music_list[i], u.music_list[i]);
    }
    n_user++;
}

// dtor
// selain implementasi, print juga "User <nama user> deleted<endl>"
// Contoh:
// User A deleted
//
/*         char* name;
        int num_of_favourite_music; // jumlah musik yang ada pada music_list
        char** music_list; // daftar judul musik
        static int n_user;*/
User::~User() {
    delete [] this->name;
    for (int i = 0; i < this->num_of_favourite_music; i++) {
        delete [] this->music_list[i];
    }
    delete [] this->music_list;
    cout << "User " << this->name << " deleted" << endl;
}

// Asumsi: musik unik, parameter: judul musik
void User::addFavouriteMusic(char* judul) {
    // copy ke temp
    char** temp = new char*[this->num_of_favourite_music + 1];
    for (int i = 0; i < this->num_of_favourite_music + 1; i++) {
        this->music_list[i] = new char[strlen(u.music_list[i]) + 1];
        strcpy(this->music_list[i], u.music_list[i]);
    }

    // delete prev music_list
    for (int i = 0; i < this->num_of_favourite_music; i++) {
        delete [] this->music_list[i];
    }
    delete [] this->music_list;
    this->music_list[this->num_of_favourite_music] = new char[strlen(judul) + 1];
    strcpy(this->music_list[this->num_of_favourite_music], judul);

    this->music_list = new char*[this->num_of_favourite_music];
    for (int i = 0; i < this->num_of_favourite_music; i++) {
        this->music_list[i] = new char[strlen(u.music_list[i]) + 1];
        strcpy(this->music_list[i], u.music_list[i]);
    }
    n_user++;
}

void User::deleteFavouriteMusic(char* deleted) {
    
}

void User::setName(char* nm) {

}

char* User::getName() const {
    
}

int User::getNumOfFavouriteMusic() const {
    
}

// format print:
// <No>. <Judul musik><endl>
// contoh:
// 1. Starship - Nicki Minaj
// 2. To Be Human - Sia, Labrinth
//
// jika tidak ada musik, print: "No music in your favourite list<endl>"
void User::viewMusicList() const {

}

int User::getNumOfUser() {

}