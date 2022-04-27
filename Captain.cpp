#include "Captain.hpp"

namespace  coup{
    Captain::Captain(Game &Game, std::string Name) : Player(Game,Name){}
    void Captain::Block(Player player) {}
    void Captain::stealCoins(Player player) {}
    Captain::~Captain() {}
}