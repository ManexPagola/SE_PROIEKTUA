#ifndef CPU_H
#define CPU_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <pthread.h>

#define TH_MAX 10
#define CORE_MAX 10
#define CPU_MAX 10

extern pthread_t Th_array[CPU_MAX][CORE_MAX][TH_MAX];
extern pthread_t hari;

#endif