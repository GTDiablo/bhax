#include <stdio.h>
#include <curses.h>
#include <unistd.h>

int main (void)
{
    WINDOW* window;
    window = initscr ();

    int x=0,y=0;
    int stepX=1,stepY=1;
    int maxX;
    int maxY;

    for (;;) {

        getmaxyx ( window, maxY , maxX );
        mvaddch(y,x,'O');
        refresh();
        clear();
        usleep (80000);
        
        x=x+stepX;
        y=y+stepY;

        if (x>=maxX-1){ 
            stepX *= -1;
        }
        if (x<=0){ 
            stepX *= -1;
        }
        if (y<=0){ 
            stepY *= -1;
        }
        if (y>=maxY-1){
            stepY *= -1;
        }
    }
}
