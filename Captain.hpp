#include "Player.hpp"
using namespace std;
namespace coup{
    class Captain: public Player{
    public:
        Captain(Game &Game, std::string Name);
        void Block(Player player);
        void stealCoins(Player player);
        ~Captain();
    };
}