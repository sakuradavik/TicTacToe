//
//  Player.cpp
//  TicTacToe
//
//  Created by MasqueradeToday on 1/26/14.
//  Copyright (c) 2014 Lianet Cuella. All rights reserved.
//

#include "Player.h"
/*
    const need to be declared before {} so that they can't be changed
 */

Player::Player(string const name,char gamePiece): name(name){
    this->gamePiece = gamePiece;
}
string Player:: getName(){
    return this->name;
}
char Player:: getGamePiece(){
    return this->gamePiece;
}

bool Player::makeMove(Grid * grid, int i, int j){
    if(i < 0 || i > 3 || j < 0 || j > 3){
        cout<<"Not a valid move"<<endl;
        return false;
    }
    else if(grid->getGridElemenet()[i][j] != ' '){
        cout<<"Piece already exists at this point"<<endl;
        return false;
    }
    else{
    (grid->getGridElemenet()[i][j] = this->gamePiece);
        return true;
    }
}

