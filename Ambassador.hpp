#include "Player.hpp"
using namespace std;
#include "Game.hpp"
namespace coup{
    class Ambassador: public Player{
    private:
        string Name;
        Game Game;
    public:
        Ambassador(Game &Game, string Name);
        void Transfer(Player player1, Player player2);
        ~Ambassador()
    };
}