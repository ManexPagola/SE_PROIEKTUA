#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>
#include <string.h>
#include <stdbool.h>
#include <semaphore.h>

#include "Process_Generator.h"
#include "ProcessQueue.h"

struct Pcb exek;




void* Scheduler() {

    

    if (!hutsaDa()) {
        exek = ezabatuPro();
        gehituPro(exek);
        printf("%lu\t", exek.pid);

    }
}