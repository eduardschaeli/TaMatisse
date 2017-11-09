/* Prototypes.h -

   Prototypes for the prototypes

*/

/* functions to draw a fibonacci spiral */
long f(long f1 = 0, long f2 = 1);

double squareGrowth(double n);

/* draw a box with mm size */
void box(float mm);

/* draw an 8 */
void achti(void);

void herz(void);

void drueegg(void);

void davidStern(void);

void eifachiChriesi(void);

void laessigiChriesi(void);

/* draw an outgoing spiral based on half circles for runde turns */
void schnaegg(int runde);

/* try to draw something the resembles the tutti.ch t-logo */
void t(void);

/* draw the home of St. Nicolaus */
void huesli(float width);

/*
 * calibrate draws a line turns 10 times to the left draws a nother line,
 * turns 10 time to right and then draws another line. This should allow
 * to calibrate the WHEEL_DISTANCE of a bot properly.
 */
void calibrate(void);
