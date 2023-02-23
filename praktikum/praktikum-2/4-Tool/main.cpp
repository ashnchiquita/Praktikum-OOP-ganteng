/*  NIM      : 13521129
    Nama     : Chiquita Ahsanunnisa
    Tanggal  : 23 Februari 2023
    Topik    : Praktikum 2 - Inheritance 
    Deskripsi: 4 - Tool */

#include "Tool.hpp"
#include "Pickaxe.hpp"
#include "ReinforcedAxe.hpp"

int main() {
    Pickaxe* p32a = new Pickaxe();
    p32a->use();
    p32a->enchant();
    Pickaxe* pcpy = new Pickaxe(*p32a);
    Pickaxe* p32b = new Pickaxe();
    *p32b = *p32a;

    ReinforcedAxe* r34 = new ReinforcedAxe();
    r34->use();
    ReinforcedAxe* rcpy = new ReinforcedAxe(*r34);
    r34->enchant();
    ReinforcedAxe* rhas = new ReinforcedAxe(*r34 + *rcpy);
    rhas->repair();

    delete r34;
    delete rcpy;
    delete rhas;
    delete p32a;
    delete p32b;
    return 0;
}

/* 
tool crafted! 3 2
pickaxe crafted! 3 2                 p32a
swing! swing! diamonds found!        p32a use
pickaxe enchanted!                   p32a enchant
tool copy crafted! 3 2
pickaxe copy crafted! 3 2            pcpy copy p32a
tool crafted! 3 2
pickaxe crafted! 3 2                 p32b
pickaxe copied! 3 2                  =
tool crafted! 3 4
reinforced axe crafted! 3 4          r34
chip chop chip chop! 3 4             r34.use
tool crafted! 3 4                   
reinforced axe copy crafted! 3 4     rcpy copy r34
reinforced axe's grip enchanted! 3 4 r34.enchant
tool crafted! 3 4                    
reinforced axe copy crafted! 3 4     
reinforcing axe! 6 8
tool crafted! 6 8                   
reinforced axe copy crafted! 6 8     rhas = new ra(r34+rcpy)
reinforced axe is repaired! 6 8      rhas.repair
reinforced axe destroyed! 3 4
tool destroyed! 3 4                  del r34
reinforced axe destroyed! 3 4
tool destroyed! 3 4                  del rcpy
reinforced axe destroyed! 6 8
tool destroyed! 6 8                  del rhas
pickaxe destroyed! 3 2
tool destroyed! 3 2                  del p32a
pickaxe destroyed! 3 2
tool destroyed! 3 2                  del p32b
*/