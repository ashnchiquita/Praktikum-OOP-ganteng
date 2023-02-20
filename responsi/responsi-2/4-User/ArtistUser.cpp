#include "ArtistUser.h"
#include <iostream>
using namespace std;

int ArtistUser::num_of_artist = 0;

//ctor, parameter: nama pengguna
ArtistUser::ArtistUser(char* nama) : User(nama) {
    this->num_of_music_uploaded = 0;
    this->uploaded_music_list = new char*[this->num_of_music_uploaded];
    num_of_artist++;
}

// cctor
ArtistUser::ArtistUser(const ArtistUser& a) : User(a) {
    this->num_of_music_uploaded = a.num_of_music_uploaded;

    this->uploaded_music_list = new char*[this->num_of_music_uploaded];
    for (int i = 0; i < this->num_of_music_uploaded; i++) {
        this->uploaded_music_list[i] = new char[strlen(a.uploaded_music_list[i]) + 1];
        strcpy(this->uploaded_music_list[i], a.uploaded_music_list[i]);
    }
    num_of_artist++;
}

// dtor
// selain implementasi, print juga "Artist user <nama user> deleted"
// Contoh:
// Artist user A deleted
ArtistUser::~ArtistUser() {
    cout << "Artist user " << this->name << " deleted" << endl;
    for (int i = 0; i < this->num_of_music_uploaded; i++) {
        delete [] this->uploaded_music_list[i];
    }
    delete [] this->uploaded_music_list;
}

// Asumsi: musik unik, parameter: judul musik
void ArtistUser::uploadMusic(char* judul) {
    char** temp = new char*[this->num_of_music_uploaded + 1];
    for (int i = 0; i < this->num_of_music_uploaded; i++) {
        temp[i] = new char[strlen(this->uploaded_music_list[i]) + 1];
        strcpy(temp[i], this->uploaded_music_list[i]);
    }
    
    for (int i = 0; i < this->num_of_music_uploaded; i++) {
        delete [] this->uploaded_music_list[i];
    }
    delete [] this->uploaded_music_list;

    temp[this->num_of_music_uploaded] = new char[strlen(judul) + 1];
    strcpy(temp[this->num_of_music_uploaded], judul);

    this->uploaded_music_list = temp;
    this->num_of_music_uploaded++;
}

void ArtistUser::deleteUploadedMusic(char* deleted) {
    int delIdx = -1;
    for (int i = 0; i < this->num_of_music_uploaded; i++) {
        if (strcmp(this->uploaded_music_list[i], deleted) == 0) {
            delIdx = i;
            break;
        }
    }
    if (delIdx != -1) {
        char** temp = new char*[this->num_of_music_uploaded - 1];
        for (int i = 0; i < delIdx; i++) {
            temp[i] = new char[strlen(this->uploaded_music_list[i]) + 1];
            strcpy(temp[i], this->uploaded_music_list[i]);
        }

        for (int i = delIdx + 1; i < this->num_of_music_uploaded; i++) {
            temp[i - 1] = new char[strlen(this->uploaded_music_list[i]) + 1];
            strcpy(temp[i - 1], this->uploaded_music_list[i]);
        }

        for (int i = 0; i < this->num_of_music_uploaded; i++) {
            delete [] this->uploaded_music_list[i];
        }
        delete [] this->uploaded_music_list;
        
        this->uploaded_music_list = temp;
        this->num_of_music_uploaded--;
    }
}

// format print:
// <No>. <Judul musik><endl>
// contoh:
// 1. Starship - Nicki Minaj
// 2. To Be Human - Sia, Labrinth
//
// jika tidak ada musik, print: "No music uploaded<endl>"
void ArtistUser::viewUploadedMusicList() const {
    if (this->num_of_music_uploaded == 0) {
        cout << "No music uploaded" << endl;
    } else {
        for (int i = 1; i <= this->num_of_music_uploaded; i++) {
            cout << i << ". " << this->uploaded_music_list[i - 1] << endl;
        }
    }
}

int ArtistUser::getNumOfMusicUploaded() const {
    return this->num_of_music_uploaded;
}

int ArtistUser::getNumOfArtist() {
    return num_of_artist;
}