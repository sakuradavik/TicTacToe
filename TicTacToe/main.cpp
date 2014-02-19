//
//  main.cpp
//  TicTacToe
//
//  Created by MasqueradeToday on 1/26/14.
//  Copyright (c) 2014 Lianet Cuella. All rights reserved.
//

#include <iostream>
#include "Player.h"

/*
    Eventually need to figure out how to do exception catching
    BAD_ACCESS exception (for example)
 */

int main()
{
    
    string name;
    char symbol;
    cout<< "Player one pleae enter your name"<<endl;
    cin >> name;
    cout<< "Player one please enter a symbol"<<endl;
    cin >> symbol;
    
    Player *p1 = new Player(name,symbol);
    
    cout<< "Player two pleae enter your name"<<endl;
    cin >> name;
    cout<< "Player two please enter a symbol"<<endl;
    cin >> symbol;
    
    Player *p2 = new Player(name,symbol);
    Grid *g = new Grid();
    //print grid
    g->printGrid();
    cout<<endl<<endl<<endl;
    int xmove, ymove;
    while(true){
        
        //Player1 turn
        cout<< p1->getName()<<" turn!"<<endl;
        cout<< p1->getName()<<": Please select a row position for your piece (between 0 & 2)"<<endl;
        cin >>xmove;
        cout<< p1->getName()<<": Please select a column position for your piece (between 0 & 2)"<<endl;
        cin >>ymove;
        

        while(!p1->makeMove(g,xmove,ymove)){
            cout<< p1->getName()<<" turn!"<<endl;
            cout<< p1->getName()<<": Please select a row position for your piece (between 0 & 2)"<<endl;
            cin >>xmove;
            cout<< p1->getName()<<": Please select a column position for your piece (between 0 & 2)"<<endl;
            cin >>ymove;

        }
        
        //Has the game been won?
        if(g->checkGrid(p1->getGamePiece()) == 1){
            cout<<p1->getName()<<" won the game!"<<endl;
            break;
        }
        //have we reached a tie
        if(g->checkGrid(p1->getGamePiece()) == 2){
            cout<<"No more moves available, game has been tied"<<endl;
            break;
        }
        //print grid
        g->printGrid();

        //Player's 2 turn
        cout<< p2->getName()<<" turn!"<<endl;
        cout<< p2->getName()<<": Please select a row position for your piece (between 0 & 2)"<<endl;
        cin >>xmove;
        cout<< p2->getName()<<": Please select a column position for your piece (between 0 & 2)"<<endl;
        cin >>ymove;
        
        while(!p2->makeMove(g,xmove,ymove)){
           // if( == true)
             //   break;
            cout<< p2->getName()<<" turn!"<<endl;
            cout<< p2->getName()<<": Please select a row position for your piece (between 0 & 2)"<<endl;
            cin >>xmove;
            cout<< p2->getName()<<": Please select a column position for your piece (between 0 & 2)"<<endl;
            cin >>ymove;
            
        }
        
        if(g->checkGrid(p2->getGamePiece()) == 1){
            cout<<p2->getName()<<" won the game!"<<endl;
            break;
        }
           
           if(g->checkGrid(p2->getGamePiece()) == 2){
               cout<<"No more moves available, game has been tied"<<endl;
               break;
           }
           
        //printGrid
        g->printGrid();
        cout<<endl<<endl<<endl;
    }
    //printGrid one last time
    g->printGrid();
    return 0;
}

