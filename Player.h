#include "Game.hpp"
#include "string"
#include "vector"
using namespace std;
namespace coup {
    class Player {
    public:
        string Name;
        Game Game_name;
        int Coins;

        Player(Game game, string name){
            this->Name=name;
            this->Game_name=game;
            this->Coins=0;
        }
        void income(){
            this->Coins+=1;
        }
        void foreign_aid(){
            this->Coins+=2;
        }
        void  coup(){
            if(this->Coins<7){
                throw invalid_argument("The player does not have enough coins to perform this action");
            }
            this->Coins-=7;
        }
        int coins(){
            return this->Coins;
        }

}}