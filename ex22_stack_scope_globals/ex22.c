#include <stdio.h>
#include "ex22.h"
#include "dbg.h"

int THE_SIZE = 1000;

// the variable is only used in this .c file
// static at the file level is different than in other places
static int THE_AGE = 37;

int get_age() {
    return THE_AGE;
}

void set_age(int age) {
    THE_AGE = age;
}

double update_ratio(double new_ratio) {
    // this var is only accessible from within this function
    // it's a way of creating constant state for a function
    static double ratio = 1.0;

    double old_ratio = ratio;
    ratio = new_ratio;

    return old_ratio;
}

void print_size() {
    log_info("I think the size is: %d", THE_SIZE);
}



