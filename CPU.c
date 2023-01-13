#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <pthread.h>

#define TH_MAX 10
#define CORE_MAX 10
#define CPU_MAX 10
#define TLB_MAX 256



Hw_hari Th_array[CPU_MAX][CORE_MAX][TH_MAX];



typedef struct  TLB_sarrera
{
	int index;
	int full;
	unsigned char v_page;
	unsigned char f_page;
}TLB_sarrera;


typedef struct  TLB
{
	struct TLB_sarrera tlb_array[TLB_MAX];
}TLB;


typedef struct MMU {
    struct TLB tlb;
} MMU;


typedef struct Hw_hari {
    int tid;
	unsigned int ptbr;
	unsigned int pc;
	unsigned int ir;
    struct MMU mmu;
} Hw_hari;

struct TLB tlb_hasieratu(TLB *tlbpar) {
	int tlb_i;
	TLB_sarrera tlb_array[TLB_MAX];
	for (tlb_i = 0; tlb_i < TLB_MAX; tlb_i++)
	{
		tlb_array[tlb_i].index = tlb_i;
		tlb_array[tlb_i].full = 0;
	}
	tlbpar->tlb_array;
}


struct MMU mmu_hasieratu(MMU *mmupar) {
	TLB tlbald;
	TLB *tlb_pt = &tlbald;
	tlbald = tlb_hasieratu(tlb_pt);
	mmupar->tlb = tlbald;
	return *mmupar; 

}

void Hw_hari_hasieratu(Hw_hari hari, int id) {
	hari.tid = id;
	MMU mmup;
	MMU *mmu_pt = &mmup;
	mmup = mmu_hasieratu(mmu_pt);
	hari.mmu = mmup;
}


int HiruDtik1Dra(int x, int y, int z) {
	return (z * CPU_MAX * CORE_MAX) + (y * CPU_MAX) + x;
}




void CPU_hasieratu(int CPU_kop, int core_kop, int hari_kop)
{
int i, j, k;

	for (i=0; i < CPU_kop; i++) {

		for (j=0; j < core_kop; j++) {

			for (k=0; k < hari_kop; k++) {
			
				Hw_hari hari;
				int idth = HiruDtik1Dra(i, j, k);
				Hw_hari_hasieratu(hari, idth);
				Th_array[i][j][k] = hari; 
			}
		}
	}	

	int a,b,c;
	for (a=0; a < CPU_kop; a++) {

                for (b=0; b < core_kop; b++) {

                        for (c=0; c < hari_kop; c++) {

                                printf("%d %d %d = %lu\n", a,b,c,Th_array[a][b][c]); 
                        }
                }
    } 
}  



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