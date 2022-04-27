#include "Contessa.hpp"
namespace coup{
    Contessa::Contessa(Game &Game, string Name): Player(Game, Name){}
    void Contessa::block(Player Player) {}
    Contessa::~Contessa(){}
}