#include "Player.h"
#include "vector"
#include "string"
using namespace std;
namespace coup{
    class Game{
    public:
        Player Winner;
        std::vector<Player> Players;
        int Turn;

        vector<Players> players();
        string winner();
        string turn();
    };
}