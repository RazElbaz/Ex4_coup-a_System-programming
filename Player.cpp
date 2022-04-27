#include "Game.hpp"
#include "Player.hpp"
using namespace std;

namespace coup{
    Player::Player(Game &Game, string &Name) {
        this->Name=Name;
        this->GameName=&Game;
        this->Coins=0;
        Game.Players.push_back(Name);
    }
    void Player::income() {}
    void Player::coup(Player &play) {}
    int Player::coins() {return 0;}
    void Player::foreign_aid() {}
    void Player::role() {}
    Player::~Player() {}
}