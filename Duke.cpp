#include "Duke.hpp"
namespace coup{
    Duke::Duke(Game &Game, string Name) : Player(Game, Name){}
    void Duke::block(Player &player) {}
    void Duke::tax() {}
    Duke::~Duke() {}
}