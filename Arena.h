//
//  Arena.h
//  main
//
//  Created by Michael Telezing on 6/23/22.
//

#ifndef Arena_h
#define Arena_h

#include "Previous.h"
#include "globals.h"


class Player;
class Robot;



class Arena
{
  public:
        // Constructor/destructor
    Arena(int nRows, int nCols);
    ~Arena();
        // Accessors
    int     rows() const;
    int     cols() const;
    Player* player() const;
    int     robotCount() const;
    int     nRobotsAt(int r, int c) const;
    void    display(std::string msg) const;
   
        // Mutators
    bool   addRobot(int r, int c);
    bool   addPlayer(int r, int c);
    void   damageRobotAt(int r, int c);
    bool   moveRobots();
    Previous& thePrevious();
  private:
    int     m_rows;
    int     m_cols;
    Player* m_player;
    Robot*  m_robots[MAXROBOTS];
    int     m_nRobots;
    Previous m_previous;
};
#endif /* Arena_h */
