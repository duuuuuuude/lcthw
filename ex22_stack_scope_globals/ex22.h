#ifndef _ex22_h
#define _ex22_h

//  -- makes THE_SIZE in ex22.c available to other .c files --
// means the variable exists, but it's in the other, 'external' location (ex22.c)
// in this case ex22.c has a variable THE_SIZE that will be accessed from ex22_main.c
extern int THE_SIZE;

//  -- gets and sets an internal static variable in ex22.c -- 
// these are taking the static var THE_AGE, but exposing it to other parts of the program
// through functions. You couldn't access THE_AGE directly, but these functions can
int get_age();
void set_age(int age);

//  -- updates a static variable that's inside update_ratio --
// This takes a new ratio value, and returns the old one. It uses a function level static
// variable ratio to keep track of what the ratio currently is.
double update_ratio(double ratio);

void print_size();

#endif
