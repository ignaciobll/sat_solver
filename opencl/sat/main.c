//
//  main.c
//  sat
//
//  Created by David Lilue on 05/06/2018.
//

#include <stdio.h>
#include <stdlib.h>
#include "anf.h"

int main (int argc, const char * argv[]) {
    Proposition *p = STM('P');
    Proposition *q = STM('Q');
    Proposition *modus_ponen = new_bin(IMPLIE,
                                    new_bin(AND,
                                        new_bin(IMPLIE,
                                            p,
                                            q),
                                        p),
                                    q);
    ANF *aux = anf(modus_ponen);
    prop_to_s(modus_ponen);
    fprintf(stdout, "\n");
    
    anf_to_s(aux);
    fprintf(stdout, "\n");
    destroy_prop(modus_ponen);
    destroy_anf(aux);
    
    return 0;
}
