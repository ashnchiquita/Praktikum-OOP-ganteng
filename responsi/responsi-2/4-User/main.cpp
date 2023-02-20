#include "User.h"
#include "ArtistUser.h"
#include "PremiumUser.h"
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    User * a = new User((char *)"aa");
    cout << a->getName() << endl;
    a->addFavouriteMusic((char *)"aowkwaoawkowk - chi");
    a->addFavouriteMusic((char *)"ditto - njs");
    a->addFavouriteMusic((char *)"hihanghoheng - njs");
    a->viewMusicList();
    a->deleteFavouriteMusic((char *)"ditto - njs");
    a->viewMusicList();
    PremiumUser * b = new PremiumUser((char *)"bb");
    ArtistUser * c = new ArtistUser((char *)"cc");
    c->uploadMusic((char *)"aowkwaoawkowk - chi");
    c->uploadMusic((char *)"ditto - njs");
    c->uploadMusic((char *)"hihanghoheng - njs");
    c->viewUploadedMusicList();
    c->deleteUploadedMusic((char *)"ditto - njs");
    c->viewUploadedMusicList();
    PremiumUser * d = new PremiumUser(*b);
    ArtistUser * e = new ArtistUser(*c);
    delete a;
    delete b;
    delete c;
    delete d;
    delete e;
    return 0;
}