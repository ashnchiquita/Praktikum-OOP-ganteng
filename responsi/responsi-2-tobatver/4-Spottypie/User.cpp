#include "User.h"
#include <iostream>
using namespace std;

int User::n_user = 0;

// ctor, parameter: nama pengguna
User::User(char* str) {
    this->name = new char[strlen(str) + 1];
    strcpy(this->name, str);
    User::n_user++;
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

    User::n_user++;
}

// dtor
// selain implementasi, print juga "User <nama user> deleted<endl>"
// Contoh:
// User A deleted
//
User::~User() {
    delete [] this->name;

    for (int i = 0; i < this->num_of_favourite_music; i++) {
        delete [] this->music_list[i];
    }

    delete [] this->music_list;
    cout << this->name << " deleted" << endl;
}

// Asumsi: musik unik, parameter: judul musik
void User::addFavouriteMusic(char* judul) {
    char ** temp = new char*[this->num_of_favourite_music];
    for (int i = 0; i < this->num_of_favourite_music; i++) {
        temp[i] = new char[strlen(this->music_list[i]) + 1];
        strcpy(temp[i], this->music_list[i]);
    }

    for (int i = 0; i < this->num_of_favourite_music; i++) {
        delete [] this->music_list[i];
    }

    delete [] this->music_list;

    this->num_of_favourite_music++;
    this->music_list = new char*[this->num_of_favourite_music];
    for (int i = 0; i < this->num_of_favourite_music - 1; i++) {
        this->music_list[i] = new char[strlen(temp[i]) + 1];
        strcpy(this->music_list[i], temp[i]);
    }

    this->music_list[this->num_of_favourite_music - 1] = new char[strlen(judul) + 1];
    strcpy(this->music_list[this->num_of_favourite_music - 1], judul);

    for (int i = 0; i < this->num_of_favourite_music - 1; i++) {
        delete [] temp[i];
    }

    delete [] temp;
}

void User::deleteFavouriteMusic(char* deleted) {
    int delIdx = -1;
    char ** temp = new char*[this->num_of_favourite_music];
    for (int i = 0; i < this->num_of_favourite_music; i++) {
        temp[i] = new char[strlen(this->music_list[i]) + 1];
        strcpy(temp[i], this->music_list[i]);

        if (strcmp(temp[i],deleted) != 0) {
            delIdx = i;
        }
    }

    for (int i = 0; i < this->num_of_favourite_music; i++) {
        delete [] this->music_list[i];
    }

    delete [] this->music_list;

    this->num_of_favourite_music--;
    this->music_list = new char*[this->num_of_favourite_music];
    for (int i = 0; i < delIdx; i++) {
        this->music_list[i] = new char[strlen(temp[i]) + 1];
        strcpy(this->music_list[i], temp[i]);
    }

    for (int i = delIdx + 1; i < this->num_of_favourite_music; i++) {
        this->music_list[i] = new char[strlen(temp[i]) + 1];
        strcpy(this->music_list[i], temp[i]);
    }

    for (int i = 0; i < this->num_of_favourite_music - 1; i++) {
        delete [] temp[i];
    }

    delete [] temp;
}

void User::setName(char* nm) {
    delete [] this->name;
    this->name = new char[strlen(nm) + 1];
    strcpy(this->name, nm);
}

char* User::getName() const {
    return this->name;
}

int User::getNumOfFavouriteMusic() const {
    return this->num_of_favourite_music;
}

// format print:
// <No>. <Judul musik><endl>
// contoh:
// 1. Starship - Nicki Minaj
// 2. To Be Human - Sia, Labrinth
//
// jika tidak ada musik, print: "No music in your favourite list<endl>"
void User::viewMusicList() const {
    for (int i = 1; i <= this->num_of_favourite_music; i++) {
        cout << i << ". " << this->music_list[i] << endl; 
    }
}

int User::getNumOfUser() {
    return n_user;
}