#include "Player.hpp"

using namespace std;
namespace coup {
    class Duke : public Player {
    public:
        Duke(Game &Game, string Name);
        void  Block(Player player);
        void Tax(Player player);
        ~Duke();
    }