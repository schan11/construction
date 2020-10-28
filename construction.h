#ifndef CONSTRUCTION_H
#define CONSTRUCTION_H

// creates struct
struct bubbletea{
    int price;
    char size[256];
    char flavor[256];
};

void print_bubbletea(struct bubbletea *b);
struct bubbletea *new_bubbletea(int p, char *s, char *f);
void modify_bubbletea(struct bubbletea *b, int np);

#endif
