#include "Assassin.hpp"
namespace coup{
    Assassin::Assassin(Game &Game, string Name): Player(Game,Name){}
    int Assassin::Coins(){ return 3;}
    Assassin::~Assassin() {}
    }
