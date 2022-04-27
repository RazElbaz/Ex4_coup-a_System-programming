#include "Captain.hpp"
namespace  coup{
    Captain::Captain(Game &Game, string Name) : Player(Game,Name){}
    void Captain::Block(Player player) {}
    void Captain::stealCoins(Player player) {}
}