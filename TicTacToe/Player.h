//
//  Player.h
//  TicTacToe
//
//  Created by MasqueradeToday on 1/26/14.
//  Copyright (c) 2014 Lianet Cuella. All rights reserved.
//

#ifndef TicTacToe_Player_h
#include <string>
#include "Grid.h"
#define TicTacToe_Player_h

using namespace std;

class Player{
private:
    string const name;
    char gamePiece; 
public:
    Player(string,char);
    string getName();
    char getGamePiece();
    bool makeMove(Grid *,int, int);
    
};



#endif
