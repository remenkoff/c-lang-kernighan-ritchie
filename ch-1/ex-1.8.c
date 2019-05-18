//
//  ex-1.8.c
//  C Programming Language (B. Kernighan, D. Ritchie)
//
//  Created by Ruslan Remenkov on 18/05/2019.
//  Copyright © 2019 Ruslan Remenkov. All rights reserved.
//

#include "stdio.h"

//  Program counts spaces, tabs and new lines

int main() {
    
    int c, sc, tc, nc;

    sc = tc = nc = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            sc++;
        } else if (c == '\t') {
            tc++;
        } else if (c == '\n') {
            nc++;
        }
    }

    printf("Spaces(%d), Tabs(%d), New Lines(%d)\n", sc, tc, nc);

    return 0;
}
