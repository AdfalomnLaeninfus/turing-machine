#ifndef _MT_H_
#define _MT_H_

#define MOVE_L -1
#define MOVE_R 1

typedef struct state {
    char *name;
    char read;
    char write;
    int move;
    void *next;
} State_t;

#endif