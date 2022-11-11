#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <pthread.h>

#define TH_MAX 10
#define CORE_MAX 10
#define CPU_MAX 10

pthread_t hari = 0;
pthread_t Th_array[CPU_MAX][CORE_MAX][TH_MAX];

//int main(int argc, char *argv[]) {
//
//	switch(argc) {
//
//		case 1: 
//                fprintf(stderr, "Sartu makinaren CPU, core eta hari kopurua \n");
//                exit(EXIT_FAILURE);
//
//		case 2:
//		fprintf(stderr, "Sartu makinaren core eta hari kopurua \n");
//		exit(EXIT_FAILURE);
//
//		case 3:
//		fprintf(stderr, "Sartu makinaren hardware hari kopurua \n");
//                exit(EXIT_FAILURE);
//        
//		case 4:
//		fprintf(stderr, "Makinaren espezifikazioak sortzen... \n");
//		break;
//
//		default:
//		fprintf(stderr, "Parametro ezezagunak sartu dituzu \n");
//                exit(EXIT_FAILURE);
//	}
//	
//	int cpu_kop = strtol(argv[1], NULL, 10);
//	int core_kop = strtol(argv[2], NULL, 10);
//	int th_kop = strtol(argv[3], NULL, 10);
//	
//	if (cpu_kop > CPU_MAX) {
//		cpu_kop = CPU_MAX;
//	}
//
//	if (core_kop > CORE_MAX) {
//                core_kop = CORE_MAX;
//        }
//
//	if (th_kop > TH_MAX) {
//                th_kop = TH_MAX;
//        }
//
//	int i, j, k;
//
//	for (i=0; i < cpu_kop; i++) {
//
//		for (j=0; j < core_kop; j++) {
//
//			for (k=0; k < th_kop; k++) {
//			
//				Th_array[i][j][k] = hari;
//				hari++; 
//			}
//		}
//	}	
//
//	int a,b,c;
//	for (a=0; a < cpu_kop; a++) {
//
//                for (b=0; b < core_kop; b++) {
//
//                        for (c=0; c < th_kop; c++) {
//
//                                printf("%d %d %d = %lu\n", a,b,c,Th_array[a][b][c]); 
//                        }
//                }
//        }   
//}