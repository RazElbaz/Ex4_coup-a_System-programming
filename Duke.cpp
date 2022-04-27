#include "Duke.hpp"
namespace coup{
    Duke::Duke(Game &Game, string Name) : Player(Game, Name){}
    void Duke::Block(Player player) {}
    void Duke::Tax(Player player) {}
    Duke::~Duke() {}
}