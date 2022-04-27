#include "Player.hpp"
#include "vector"
#include "string"
using namespace std;
#include <iostream>
namespace coup{
    class Game{
    public:
        Game(){}
        Player Winner;
        std::vector<Player> Players;
        int Turn;
        ~Game(){}
        vector<string> players();
        string winner();
        string turn();
    };
}