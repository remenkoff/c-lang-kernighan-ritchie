//
//  pt-1.5.4.c
//  C Programming Language (B. Kernighan, D. Ritchie)
//
//  Created by Ruslan Remenkov on 19/05/2019.
//  Copyright © 2019 Ruslan Remenkov. All rights reserved.
//

#include "stdio.h"

#define IN  1   // inside
#define OUT 0   // outside

//  IN-stream new lines, words and symbols counter

int main() {

    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nc;

        if (c == '\n')
            ++nl;

        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            ++nw;
            state = IN;
        }
    }

    printf("New lines: %d; Words: %d; Symbols: %d\n", nl, nw, nc);
    
    return 0;
}
