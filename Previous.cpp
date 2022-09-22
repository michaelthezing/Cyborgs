//
//  Previous.cpp
//  main
//
//  Created by Michael Telezing on 6/23/22.
//

#include "Previous.h"


Previous::Previous(int nRows, int nCols)
{
    m_Rows = nRows;
    m_Cols = nCols;
    
    for(int i =0; i < MAXROWS; i++)
    {
        for(int j = 0; j < MAXCOLS; j++)
        {
            arena[i][j] = '.';
        }
    }
    
    
}

bool Previous::dropACrumb(int r, int c)
{
    if(c>m_Cols||r >m_Rows||r < 1|| c < 1)
    {
        return false;
    }
    else
    {
        if(arena[r-1][c-1] == '.')
        {
            arena[r-1][c-1] = 'A';
        }
        else if(arena[r-1][c-1]!= 'Z')
        {
            arena[r-1][c-1]++;
        }

    }
    return true;
}

void Previous::showPreviousMoves() const{
    
    
    for(int i =0; i < m_Rows;i++)
    {
        for(int j =0; j < m_Cols;j++)
        {
            cout << arena[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
