//
//  Player.h
//  TicTacToe
//
//  Created by MasqueradeToday on 1/26/14.
//  Copyright (c) 2014 Lianet Cuella. All rights reserved.
//

#ifndef TicTacToe_Player_h
#include <string>
#define TicTacToe_Player_h

using namespace std;

class Player{
private:
    string const name;
    int wins;
    int loses;
    int forfeits;
    char gamePiece; // X or O
public:
    Player(string,char);
    string getName();
    //void makeMove(Grid * g);
    void win();
    int getWins();
    void lose();
    int getLoses();
    void forfeit();
    int getForfeits();
    double getAverage();
    
};



#endif
