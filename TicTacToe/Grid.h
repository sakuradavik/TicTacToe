//
//  Grid.h
//  TicTacToe
//
//  Created by MasqueradeToday on 1/26/14.
//  Copyright (c) 2014 Lianet Cuella. All rights reserved.
//

#ifndef __TicTacToe__Grid__
#define __TicTacToe__Grid__

#include <iostream>
using namespace std;

/*
    i=   0 1 2
    j=0 |x|x|x|
     =1 |_|_|_|
     =2 |_|_|_|
 
    0,1
    Grid[1][j]
 
    for(int i) //rows
        for(int j)// cols
    //check if coloms are all the same
    if(gridElements[i][j] == 'X' && gridElements[i][j+1] == 'X' && gridElements[i][j+2] == 'X)
 
 */

class Grid{
    
private:
    char **gridElements;
    int numMoves;//when it reaches 9, grid filled
    int staus; //0 = lose, 1 = win, -1 = deadlock
    int playerTurn; //0 player1 1 player 2

public:
    int checkGrid(char);//return status, determine who wins etc.
    int getMovesTaken();
    int whoseTurn();
    char** getGridElemenet();
    void printGrid();
    void incrementMove();
    Grid();
};

#endif /* defined(__TicTacToe__Grid__) */

