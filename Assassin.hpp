#include "Player.hpp"
using namespace std;
namespace coup{
    class Assassin: public Player{
    public:
        Ambassador(Game &Game, string Name);
        int Coins();
    };
}