#include "Player.hpp"
using namespace std;
namespace coup{
    class Ambassador: public Player{
    private:
        string Name;
        string Game;
    public:
        Ambassador(Game &Game, string Name);
        void Transfer(Player player1, Player player2);

    };
}