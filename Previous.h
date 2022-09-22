//
//  Previous.h
//  main
//
//  Created by Michael Telezing on 6/23/22.
//

#ifndef Previous_h
#define Previous_h
#include "globals.h"

class Previous
 {
   public:
     Previous(int nRows, int nCols);
     bool dropACrumb(int r, int c);
     void showPreviousMoves() const;
 private:
     int m_Rows;
     int m_Cols;
     char arena[MAXROWS][MAXCOLS];
     
 };
#endif /* Previous_h */
