//
//  Game.h
//  main
//
//  Created by Michael Telezing on 6/23/22.
//

#ifndef Game_h
#define Game_h
#include "Arena.h"

class Game
{
  public:
        // Constructor/destructor
    Game(int rows, int cols, int nRobots);
    ~Game();
        // Mutators
    void play();
  private:
    Arena* m_arena;
};
#endif /* Game_h */
