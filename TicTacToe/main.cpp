//
//  main.cpp
//  TicTacToe
//
//  Created by MasqueradeToday on 1/26/14.
//  Copyright (c) 2014 Lianet Cuella. All rights reserved.
//

#include <iostream>
#include "Player.h"

int main(int argc, const char * argv[])
{

    // insert code here...
    Player *p = new Player("Lia",'X');
    p->win();
    cout<< p->getName()<<endl;
    return 0;
}

