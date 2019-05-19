//
//  ex-1.11.c
//  C Programming Language (B. Kernighan, D. Ritchie)
//
//  Created by Ruslan Remenkov on 19/05/2019.
//  Copyright © 2019 Ruslan Remenkov. All rights reserved.
//

#include "stdio.h"

#define IN  1       // inside
#define OUT 0       // outside
#define EOL '\0'    // end of line

//  Test pt-1.5.3.c

int main() {

    int i, c, nl, nw, nc, state;

    state = OUT;
    i = nw = nc = 0;
    nl = 1;

    char testString[] = "Lorem ipsum dolor sit amet,\nconsectetur adipiscing elit,\nsed do eiusmod tempor incididunt ut labore et dolore magna.";
    int testResult[] = {3, 18, 116};

    while ((c = testString[i]) != EOL) {
        ++nc;
        ++i;

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
    
    if (nl == testResult[0] && nw == testResult[1] && nc == testResult[2]) {
        printf("Test PASSED!\n");
    } else {
        printf("Test FAILED!\n");
    }
    
    return 0;
}
