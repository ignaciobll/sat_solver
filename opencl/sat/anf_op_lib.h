//
//  anf_opencl.h
//  sat
//
//  Created by David Lilue on 07/07/2018.
//

#ifndef ANF

#define BS_SIZE 128

typedef enum {LT, GT, EQ} Ordering;

typedef struct _anf_op {
    int capacity;
    int monomials;
    int *order;
    int *bits_on;
    char *bstring;
} ANF;

char* new_bitstring (void);
ANF* empty_anf (void);
ANF* one (void);
ANF* new_poly (int var);
void add_xor_comp (ANF *p, char *bs, int bits_on);
void add_xor_comp_envious (ANF *p, char *bs, int bits_on);
char* get_anf_bs (ANF *anf, int i);
Ordering compare_bs (char *x, char *y, int bits_x, int bits_y);
void merge_sort_anf (ANF *p);
void free_anf_opencl (ANF *p);
void print_anf_opencl (ANF *p);
void print_bs (char *bs, int bits_on);

#endif /* ANF */