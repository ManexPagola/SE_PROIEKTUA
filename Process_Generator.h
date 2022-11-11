#ifndef PROCESSGENERATOR_H
#define PROCESSGENERATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>
#include <string.h>
#include <sys/wait.h>
#include <semaphore.h>

#include "ProcessQueue.h"

struct Pcb prozesua;
pthread_t proGen;

void* ProzesuHuts();

void* ProzesuSortzaile();

void* ProErakutsi(int ind);



#endif
