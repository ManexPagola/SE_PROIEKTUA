#ifndef PROCESSQUEUE_H
#define PROCESSQUEUE_H
#include <stdbool.h>

#define PRO_MAX 100

typedef struct Pcb {
    pthread_t pid;
    int denbora;
} Pcb;


extern struct Pcb ProcessQueue[PRO_MAX];


struct Pcb buruaErakutsi();

bool hutsaDa();

bool beteaDago();

int tamaina();

void gehituPro(struct Pcb);

struct Pcb ezabatuPro();

#endif
