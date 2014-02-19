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
//void makeMove(Grid * g);
void Player::win(){
    this->wins++;
}
int Player::getWins(){
    return this->wins;
}
void Player::lose(){
    this->loses++;
}
int Player::getLoses(){
    return this->loses;
}
void Player::forfeit(){
    this->forfeits++;
}
int Player::getForfeits(){
    return this->forfeits;
}
double Player::getAverage(){
    return ((double)wins/(double)(wins+loses+forfeits));
}
