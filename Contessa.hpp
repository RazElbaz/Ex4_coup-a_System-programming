#include "Player.hpp"
using namespace std;
namespace coup{
    class Contessa: public Player{
    public:
        Contessa(Game &Game, string Name);
        void Block(Player Player);
    };
}