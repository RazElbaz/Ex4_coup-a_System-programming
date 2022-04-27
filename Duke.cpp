#include "Duke.hpp"
namespace coup{
    Duke::Duke(Game &Game, string Name) : Player(Game, Name){}
    void Duke::block(Player player) {return;}
    void Duke::tax() {return;}
    Duke::~Duke() {}
}