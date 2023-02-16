#include "User.h"

class User {
    public:
        // ctor, parameter: nama pengguna
        User::User(char*) {
            
        }
        
        // cctor
        User::User(const User&) {
            
        }

        // dtor
        // selain implementasi, print juga "User <nama user> deleted<endl>"
        // Contoh:
        // User A deleted
        //
        User::~User() {
            
        }

        // Asumsi: musik unik, parameter: judul musik
        void User::addFavouriteMusic(char*) {
            
        }
        void User::deleteFavouriteMusic(char*) {
            
        }
        
        void User::setName(char*) {
            
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

        static int User::getNumOfUser() {
            
        }
    protected:
        char* name {
            
        }
        int num_of_favourite_music {
            
        } // jumlah musik yang ada pada music_list
        char** music_list {
            
        } // daftar judul musik
        static int n_user {
            
        }
} {
    
}