#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <pthread.h>
#include <string.h>
#include <sys/wait.h>
#include <semaphore.h>

#include "ProcessQueue.h"

//int tick=0;
//int i=0;
struct Pcb prozesua;
pthread_t proGen;
//pthread_mutex_t mutexProzesu;
//pthread_mutex_t mutexProzesu2;

void* ProzesuHuts() { 
	sleep(0);
}

void* ProErakutsi(int ind) {
    printf("%lu\t", ProcessQueue[ind].pid);
}

void* ProzesuSortzaile() {
  int j=0;
  
    if (pthread_create(&proGen, NULL, &ProzesuHuts, NULL) != 0) { 
		      fprintf(stderr, "Errorea prozesu sortzailearen haria sortzen \n");
          exit(EXIT_FAILURE);
    }
    prozesua.pid = proGen;
    gehituPro(prozesua);
    if (j < 100)
    {
      ProErakutsi(j);
    }
    j++;
  

}

//int main(int argc, char* argv[]) {

  //  pthread_t proGen;
    //pthread_mutex_init(&mutexProzesu, NULL);
  //  pthread_mutex_init(&mutexProzesu2, NULL);

    //if (argc != 2) {
		//fprintf(stderr, "Sartu prozesuak sortuko dituen maiztasuna \n");
		//exit(EXIT_FAILURE);
    //}

    //int maizPro = strtol(argv[1], NULL, 10);

     
    //while (i < PRO_MAX)
    //{
	//while (tick < maizPro) {
    //    tick++;
	//}
    //    if (tick==maizPro) {
      //      tick=0;
	    //pthread_mutex_lock(&mutexProzesu);
        //    if (pthread_create(&proGen, NULL, &ProzesuSortzaile, NULL) != 0) { 
		      //  fprintf(stderr, "Errorea prozesu sortzailearen haria sortzen \n");
            //    exit(EXIT_FAILURE);
	        //}
	    //pthread_mutex_unlock(&mutexProzesu);   
        //    prozesua.pid = proGen;
          //  gehituPro(prozesua);
            //i++; 
        //}
    //}
        
    //for (int j=0 ; j < PRO_MAX; j++)
    //{
      //  printf("%lu\t", ProcessQueue[j].pid);
    //}
      

    //if (pthread_join(proGen, NULL) != 0) { 
      //          fprintf(stderr, "Errorea proGen haria sinkronizatzean...\n");
        //        exit(EXIT_FAILURE);
   // } 
   //pthread_mutex_destroy(&mutexProzesu);
   //pthread_mutex_destroy(&mutexProzesu2);
//}   
