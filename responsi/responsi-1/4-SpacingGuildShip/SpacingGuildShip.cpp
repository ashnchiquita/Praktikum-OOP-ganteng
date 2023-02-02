/*  NIM     : 13521129
    Nama    : Chiquita Ahsanunnisa
    Tanggal : 2 Februari 2023
    Topik   : Responsi 1 - Spacing Guild Ship
*/

#include "SpacingGuildShip.hpp"

float SpacingGuildShip::totalGuildTravel = 0;
int SpacingGuildShip::producedShips = 0;

SpacingGuildShip::SpacingGuildShip() : maxPassengerCap(50), guildNavigatorCount(3), serialNum(SpacingGuildShip::producedShips + 1) {
/* Ctor default: jumlah penumpang adalah 0, jumlah Guild Navigator adalah 3,
  * Kapasitas pesawat adalah 50 orang, dan stok spice 50*/
  this->passengerCount = 0;
  this->operatingGuildNavigator = this->guildNavigatorCount;
  this->spiceStock = 50;
  SpacingGuildShip::producedShips++;
}

SpacingGuildShip::SpacingGuildShip(int maxPassengerCap, int guildNavigatorCount, int spiceStock) : maxPassengerCap(maxPassengerCap), guildNavigatorCount(guildNavigatorCount), serialNum(SpacingGuildShip::producedShips + 1)  {
/* Ctor jika diketahui jumlah Guild Navigator, kapasitas maksimal pesawat, 
  * dan stok spice. Jumlah penumpang 0 */
  this->passengerCount = 0;
  this->operatingGuildNavigator = this->guildNavigatorCount;
  this->spiceStock = spiceStock;
  SpacingGuildShip::producedShips++;
}

SpacingGuildShip::SpacingGuildShip(const SpacingGuildShip& sgs) : maxPassengerCap(sgs.maxPassengerCap), guildNavigatorCount(sgs.guildNavigatorCount), serialNum(SpacingGuildShip::producedShips + 1)  {
/* Cctor SpacingGuildShip */
  this->passengerCount = sgs.passengerCount;
  this->operatingGuildNavigator = sgs.guildNavigatorCount;
  this->spiceStock = sgs.spiceStock;
  SpacingGuildShip::producedShips++;
}

SpacingGuildShip::~SpacingGuildShip() {

}

int SpacingGuildShip::getShipSerialNum() const {
/* Mengembalikan serial number dari pesawat */
  return this->serialNum;
}

int SpacingGuildShip::getPassengerCount() const {
/* Mengembalikan jumlah penumpang pesawat */
  return this->passengerCount;
}

void SpacingGuildShip::travel(float distance) {
/* Pesawat bergerak sebesar distance, sehingga 
  * totalGuildTravel bertambah sebesar:
  *
  * distance / (E^2 * operatingGuildNavigator).
  * 
  * Catatan: 
  * 1. Apabila tidak ada Guild Navigator yang operasional, 
  *    maka totalGuildTravel tidak bertambah {
  * }
  * 2. Apabila ada Guild Navigator yang operasional, 
  *    maka jumlah Guild Navigator operasional berkurang 1 */
  if (this->operatingGuildNavigator >= 1) {
    SpacingGuildShip::totalGuildTravel += distance / (E * E * this->operatingGuildNavigator);
    this->operatingGuildNavigator--;
  }
}

void SpacingGuildShip::boarding(int addedPassengers) {
/* Penumpang naik ke pesawat sebesar addedPassenger. 
  * Jika pesawat tidak muat, penumpang pesawat menjadi penuh */
  if (this->passengerCount + addedPassengers > this->maxPassengerCap) {
    this->passengerCount = this->maxPassengerCap;
  } else {
    this->passengerCount += addedPassengers;
  }
}

void SpacingGuildShip::dropOff(int droppedPassengers) {
/* Penumpang turun dari pesawat sebesar droppedPassenger. 
  * Jika jumlah penumpang kurang, kosongkan pesawat */
  if (this->passengerCount < droppedPassengers) {
    this->passengerCount = 0;
  } else {
    this->passengerCount -= droppedPassengers;
  }
}

void SpacingGuildShip::refreshNavigator(int n) {
/* Menambah n Guild Navigator operasional yang menghabiskan
  * n * GUILD_NAVIGATOR_SPICE_DOSE spice dari stok.
  * 
  * Catatan:
  * 1. Maksimum merefresh seluruh Guild Navigator yang ada di pesawat 
  * 2. Apabila stok kurang, maka merefresh n maksimum yang dapat di refresh
  *    dari stok spice yang ada */
  int maxN = int(this->spiceStock / GUILD_NAVIGATOR_SPICE_DOSE);
  int maxGuild = this->guildNavigatorCount - this->operatingGuildNavigator;

  if (!(n <= maxN && n <= maxGuild)) {
    if (maxGuild >= maxN) {
      n = maxN;
    } else {
      n = maxGuild;
    }        
  }
  
  this->spiceStock -= n * GUILD_NAVIGATOR_SPICE_DOSE;
  this->operatingGuildNavigator += n;
}

void SpacingGuildShip::transitToArrakis(int addedSpice) {
/* Menambah stok spice sebesar addedSpice */
  this->spiceStock += addedSpice;
}