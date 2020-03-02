#include <stdio.h>
#include <curses.h>
#include <unistd.h>
#include <stdlib.h>


int main (void)
{
    WINDOW* window;
    window = initscr ();

    int xdesc=0,ydesc=0, xasc=0,yasc=0;
    int maxX;
    int maxY;

    for (;;) {

        getmaxyx ( window, maxY , maxX );
        maxY=maxY*2;
        maxX=maxX*2;
        refresh();
        clear();
        usleep (80000);

        xdesc = (xdesc-1) % maxX;
        xasc = (xasc+1) % maxX;
        ydesc = (ydesc-1) % maxY;
        yasc = (yasc+1) % maxY;

        mvprintw(abs((ydesc + (maxY-yasc))/2),abs((xdesc+(maxX-xasc))/2),"O");
    }
}
