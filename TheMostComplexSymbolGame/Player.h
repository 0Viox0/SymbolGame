#pragma once
#include "generalStruct.h"

//trying create stickman art
   /*
    "Tonja Hickey"

        _\|/^
         (_oo
          |     idle looking right
         /|\
          |

        ^\|/_
        oo_)
          |     idle looking left
         /|\
          |


        -\|/-
         (-)
          |     idle looking up
         /|\
          |

        -\|/-
        (o_o)
          |     idle looking left
         /|\
          |


                _\|/^
                 (_oo  sitting if idle for a long time
                  |
                  |__i

                ^\|/_
                oo_)  sitting if idle for a long time
                  |
               i__|

   */

enum DIRECTION {UP, DOWN, LEFT, RIGHT};

class Player
{
private:
    Coords coord;
    DIRECTION dir;

    bool playerUpdated;

    //draw funcions
    void drawLeft();
    void drawRight();
    void drawUp();
    void drawDown();

    void clearPrevPlayerDrawing();
public:
    Player();

   
    //------------------------------

    void updateMovement(const Coords&, const DIRECTION&);
    void render();

    //getters
    Coords getCoords();
  
    //setters
    void setPlayerUpdated(const bool& value);
};