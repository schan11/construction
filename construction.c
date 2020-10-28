#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "construction.h"

// prints out variables of struct type
void print_bubbletea(struct bubbletea *b){
    printf("Flavor: %s\tSize: %s\tPrice: %d\t", b -> flavor, b -> size, b -> price);
}

// creates new struct in heap memory
struct bubbletea *new_bubbletea(int p, char *s, char *f) {
    
    struct bubbletea *nb;
    
    nb = malloc(sizeof(struct bubbletea));
    strncpy(nb -> flavor, f, sizeof(nb -> flavor) - 1);
    strncpy(nb -> size, s, sizeof(nb -> size) - 1);
    nb -> price = p;

    return nb;
}

// modifies values of struct type
void modify_bubbletea(struct bubbletea *b, int np){
    b -> price = np;
    printf("Flavor: %s\tSize: %s\tPrice: %d\t", b -> flavor, b -> size, b -> price);
}
