//
//  ex-1.12.c
//  C Programming Language (B. Kernighan, D. Ritchie)
//
//  Created by Ruslan Remenkov on 19/05/2019.
//  Copyright © 2019 Ruslan Remenkov. All rights reserved.
//

#include "stdio.h"

//  Program outputs each word on the new line

int main() {

    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t')
            printf("\n");
        else {
            putchar(c);
        }
    }
    
    return 0;
}
