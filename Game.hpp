#include <vector>
#include <string>
using namespace std;
#include <iostream>
#pragma once
namespace coup{
    class Game{
    public:
        Game();
        //Player Winner;
        vector<string> Players;
        int Turn;
        vector<string> players();
        string winner();
        string turn();
        ~Game();
    };
}