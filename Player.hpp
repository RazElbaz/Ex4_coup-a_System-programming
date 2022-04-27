#include "Game.hpp"
#inclide <string>
#include <iostream>
using namespace std;
namespace coup {
    class Player {
    protected:
        string Name;
        string Role;
        Game *GameName;
        int Coins;

    public:
        Player(Game game, string name) {
            this->Name=name;
            this->GameName=game;
            this->Coins=0;
            this->Role=role;
        }
        void income();
        void foreign_aid();
        void  coup();
        int coins();
        void coup(Player play);
        string role();
        ~Player();
};}