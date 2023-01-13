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
#define TLB_MAX 256


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

extern Hw_hari Th_array[CPU_MAX][CORE_MAX][TH_MAX];

int HiruDtik1Dra(int x, int y, int z);
void Hw_hari_hasieratu(Hw_hari hari, int id);
struct MMU mmu_hasieratu(MMU *mmupar);
struct TLB tlb_hasieratu(TLB *tlbpar);
void CPU_Hasieratu(int CPU_kop, int core_kop, int hari_kop);


#endif