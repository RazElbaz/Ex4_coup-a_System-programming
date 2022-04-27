#include "Game.hpp"
#define NULL __null

namespace coup{
    Game::Game() {}
    vector<string> Game::players(){return this->Players;}
    string Game::winner(){return "";}
    string Game::turn(){return "";}
    Game::~Game() {}
};