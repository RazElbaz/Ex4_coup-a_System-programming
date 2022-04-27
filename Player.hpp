#include "Game.hpp"
#include <string>
using namespace std;
namespace coup {
    class Player {
    private:
        string Name;
//        string Role;
        Game *GameName;
        int Coins;

    public:
        Player(Game &Game, string Name);
        void income();
        void foreign_aid();
        int coins();
        void coup(Player play);
        void role();
        ~Player();
};}