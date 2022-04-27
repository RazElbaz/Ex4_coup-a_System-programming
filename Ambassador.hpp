#include "Player.hpp"
using namespace std;
namespace coup{
    class Ambassador: public Player{
    private:
        string Name;
        Game GameName;
    public:
        Ambassador(Game &Game, string Name);
        void transfer(Player player1, Player player2);
        ~Ambassador();
    };
}