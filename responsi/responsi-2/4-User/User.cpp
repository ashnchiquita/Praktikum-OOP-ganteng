#include "User.h"
#include <iostream>
using namespace std;

int User::n_user = 0;

// ctor, parameter: nama pengguna
User::User(char* nama) {
    this->name = new char[strlen(nama) + 1];
    strcpy(this->name, nama);
    this->num_of_favourite_music = 0;
    this->music_list = new char*[this->num_of_favourite_music];
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

User::~User() {
    cout << "User " << this->name << " deleted" << endl;
    delete [] this->name;
    for (int i = 0; i < this->num_of_favourite_music; i++) {
        delete [] this->music_list[i];
    }
    delete [] this->music_list;
}

// Asumsi: musik unik, parameter: judul musik
void User::addFavouriteMusic(char* judul) {
    char** temp = new char*[this->num_of_favourite_music + 1];
    for (int i = 0; i < this->num_of_favourite_music; i++) {
        temp[i] = new char[strlen(this->music_list[i]) + 1];
        strcpy(temp[i], this->music_list[i]);
    }
    
    for (int i = 0; i < this->num_of_favourite_music; i++) {
        delete [] this->music_list[i];
    }
    delete [] this->music_list;

    temp[this->num_of_favourite_music] = new char[strlen(judul) + 1];
    strcpy(temp[this->num_of_favourite_music], judul);

    this->music_list = temp;
    this->num_of_favourite_music++;
}

void User::deleteFavouriteMusic(char* deleted) {
    int delIdx = -1;
    for (int i = 0; i < this->num_of_favourite_music; i++) {
        if (strcmp(this->music_list[i], deleted) == 0) {
            delIdx = i;
            break;
        }
    }
    if (delIdx != -1) {
        char** temp = new char*[this->num_of_favourite_music - 1];
        for (int i = 0; i < delIdx; i++) {
            temp[i] = new char[strlen(this->music_list[i]) + 1];
            strcpy(temp[i], this->music_list[i]);
        }

        for (int i = delIdx + 1; i < this->num_of_favourite_music; i++) {
            temp[i - 1] = new char[strlen(this->music_list[i]) + 1];
            strcpy(temp[i - 1], this->music_list[i]);
        }

        for (int i = 0; i < this->num_of_favourite_music; i++) {
            delete [] this->music_list[i];
        }
        delete [] this->music_list;
        
        this->music_list = temp;
        this->num_of_favourite_music--;
    }
}

void User::setName(char* nm) {
    delete [] this->name;
    this->name = new char[strlen(this->name) + 1];
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
    if (this->num_of_favourite_music == 0) {
        cout << "No music in your favourite list" << endl;
    } else {
        for (int i = 1; i <= this->num_of_favourite_music; i++) {
            cout << i << ". " << this->music_list[i - 1] << endl;
        }
    }
}

int User::getNumOfUser() {
    return n_user;
}