#if __has_include(<conio.h>)
#include <conio.h>
#else

#include <termios.h>
#include <stdio.h>

/* Initialize new terminal i/o settings */
void initTermios(int echo);

/* Restore old terminal i/o settings */
void resetTermios(void);

/* Read 1 character - echo defines echo mode */
char getch_(int echo);

/* Read 1 character without echo */
char getch(void);

/* Read 1 character with echo */
char getche(void);

/* Read 1 character without echo */
char _getch(void);

/* Read 1 character with echo */
char _getche(void);

#endif