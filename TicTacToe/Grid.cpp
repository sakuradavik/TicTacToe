//
//  Grid.cpp
//  TicTacToe
//
//  Created by MasqueradeToday on 1/26/14.
//  Copyright (c) 2014 Lianet Cuella. All rights reserved.
//

#include "Grid.h"

Grid::Grid(){
    this->gridElements = new char *[3];
    for(int i = 0; i < 3; i++)
        (this->gridElements)[i] = new char[3];
    this->playerTurn = 0; //player1's turn
    
    //Populates the grid to make all symbols equal to ' ' originally
    for(int i = 0; i < 3; i ++)
        for(int j = 0; j < 3; j++)
            this->gridElements[i][j] = ' ';
}
int Grid::checkGrid(char symbol){
    for(int i = 0; i < 3; i++){
            if(this->gridElements[i][0] == symbol && this->gridElements[i][1] == symbol && this->gridElements[i][2] == symbol){
                return 1;
            }
            if(this->gridElements[0][i] == symbol && this->gridElements[1][i] == symbol && this->gridElements[2][i] == symbol){
                return 1;
            }
    }
                //Diagonal check
            if(this->gridElements[0][0] == symbol && this->gridElements[1][1] == symbol && this->gridElements[2][2] == symbol){
                return 1;
            }
    
            //AntiDiagonal check
            if(this->gridElements[2][0] == symbol && this->gridElements[1][1] == symbol && this->gridElements[0][2] == symbol){
                return 1;
            }
    
            //check for salemate
    int tie = 0;
    for(int i = 0; i < 3; i++){
        if(this->gridElements[i][0] != ' ' && this->gridElements[i][1] != ' ' && this->gridElements[i][2] != ' ')
            tie++;
        cout<<tie<<" tie is"<<endl;
    }
    if(tie == 3)
        return 2;
    
    return 0;
}
           
int Grid::getMovesTaken(){
    return this->numMoves;
}
int Grid::whoseTurn(){
    return this->playerTurn;
}
char** Grid::getGridElemenet(){
    return this->gridElements;
}

void Grid::printGrid(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j <3; j++){
            if(gridElements[i][j] != ' ' || gridElements[i][j] !=' ')
                cout<<'|'<<this->gridElements[i][j]<<'|';
            else
                cout<<'|'<<'_'<<'|';
        }
        cout<<endl;
    }
}

void Grid:: incrementMove(){
    this->numMoves++;
}