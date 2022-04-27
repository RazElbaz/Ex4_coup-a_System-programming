#include "Assassin.hpp"
namespace coup{
    Assassin::Assassin(Game &game, string Name): Player(Game,Name){}
    int Assassin::Coins(){ return 3;}
    }
