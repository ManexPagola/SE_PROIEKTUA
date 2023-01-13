#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <semaphore.h>
#include <pthread.h>

#define PRO_MAX 100

typedef struct MemoryManagement {
   unsigned int pgb;
   unsigned int code;
   unsigned int data;
} MemoryManagement;

typedef struct Pcb {
    pthread_t pid;
    int denbora;
    struct MemoryManagement mm; 
} Pcb;

struct Pcb ProcessQueue[PRO_MAX];
int burua = 0; 
int buztana = -1; 
int elemkop = 0;  

struct Pcb buruaErakutsi() {
   return ProcessQueue[burua];
}

bool hutsaDa() {
   return elemkop == 0;
}

bool beteaDago() {
   return elemkop == PRO_MAX;
}

int tamaina() {
   return elemkop;
}  

void gehituPro(struct Pcb prozesu) {

   if(!beteaDago()) {
	
      if(buztana == PRO_MAX-1) {
         buztana = -1;            
      }       

      ProcessQueue[++buztana] = prozesu;
      elemkop++;
   }
}

struct Pcb ezabatuPro() {
   struct Pcb prozesu = ProcessQueue[burua++];
	
   if(burua == PRO_MAX) {
      burua = 0;
   }
	
   elemkop--;
   return prozesu;  
}