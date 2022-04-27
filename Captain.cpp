#include "Captain.hpp"

namespace  coup{
    Captain::Captain(Game &Game, std::string Name) : Player(Game,Name){}
    void Captain::block(Player &player) {}
    void Captain::steal(Player &player) {}
    Captain::~Captain() {}
}