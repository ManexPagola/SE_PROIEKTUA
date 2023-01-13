

#define maxNode 4
#define maxVirtualPage 10000
#define maxCodeFrame 16384
#define maxDataFrame 16384
#define maxFrame 32768

typedef struct OrriFisikoa {
    int id;
    unsigned char node_array[maxNode];
} OrriFisikoa;

typedef struct PT_errenkada {
    unsigned char v_page;
    struct OrriFisikoa f_page;
} PT_errenkada;


typedef struct CodeMem {
    unsigned int code_helb;
    struct OrriFisikoa codePage_array[maxCodeFrame];
} CodeMem;

typedef struct DataMem {
    unsigned int data_helb;
    struct OrriFisikoa dataPage_array[maxDataFrame];
} DataMem;

typedef struct PageTable {
    unsigned int pt_helb;
    struct  PT_errenkada PT_array[maxFrame];
} PageTable;

typedef struct OrriBirtuala {
    unsigned char v_page;
    unsigned int offset;
} OrriBirtuala;

struct OrriBirtuala MemoriaBirtuala[maxVirtualPage];

typedef struct MemFisikoa {
    struct CodeMem codemem;
    struct DataMem datamem;
    struct PageTable ptable;
} MemFisikoa;