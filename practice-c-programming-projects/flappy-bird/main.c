// skeleton code 

#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#define DELAY 100000 // game speed
#define PIPE_COUNT 7
#define PIPE_GAP 20  // vertical gap size 
#define PIPE_WIDTH 50   // pipe width 
#define SCREEN_WIDTH 60
#define SCREEN_HEIGHT 40 
#define BIRD_X 5

typedef struct {
    int x;
    int gap_y;
} Pipe; 

void draw_pipe(int x, int gap_y);
void generate_pipes(Pipe pipes[], int count);


int main() {
    initscr(); // initialize ncurses 
    noecho();  // disable echoing of typed characters 
    curs_set(FALSE); // hide the cursor 
    nodelay(stdscr,TRUE); //make getch non-blocking 
    srand(time(NULL));

//    int bird_y=10;
//    int bird_x=5;
//    int ch;
    
    int bird_y=SCREEN_HEIGHT/2;
    int ch;


    //initialize pipes 
    Pipe pipes[PIPE_COUNT];
    generate_pipes(pipes, PIPE_COUNT);

    while(1) {
        clear(); //clear screen

        // draw pipes 
        for(int i=0;i<PIPE_COUNT;i++) {
            draw_pipe(pipes[i].x, pipes[i].gap_y);
            pipes[i].x--; // move pipes left

            // regenerate pipe when it goes off-screen 
            if(pipes[i].x<0) {
                pipes[i].x=SCREEN_WIDTH;
                pipes[i].gap_y=rand() % (SCREEN_HEIGHT-PIPE_GAP-2)+1;
            }
        }


        // draw bird 
        mvprintw(bird_y, BIRD_X, "O");
        
        // handle input 
        ch=getch();
        if(ch==' ') bird_y-=7; // jump when spacebar is pressed 
    
        // apply gravity
        bird_y++;
        refresh(); // refresh screen to show updates
        usleep(DELAY); // control game speed 
    }

    endwin(); // restore terminal settings 
    return 0;
}

// function to draw pipes 
void draw_pipe(int x, int gap_y) {
    for(int y=0;y<SCREEN_HEIGHT;y++) {
        if(y<gap_y || y>gap_y+PIPE_GAP) {
            mvprintw(y,x, "|||");
        }
    }

}

void generate_pipes(Pipe pipes[], int count) {
    for(int i=0;i<count;i++) {
        pipes[i].x=SCREEN_WIDTH + (i * (SCREEN_WIDTH/PIPE_COUNT));
        pipes[i].gap_y=rand()%(SCREEN_HEIGHT - PIPE_GAP - 2) + 1;
    }
}

