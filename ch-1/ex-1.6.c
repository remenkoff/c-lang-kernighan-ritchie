//
//  ex-1.6.c
//  C Programming Language (B. Kernighan, D. Ritchie)
//
//  Created by Ruslan Remenkov on 18/05/2019.
//  Copyright © 2019 Ruslan Remenkov. All rights reserved.
//

#include "stdio.h"

//  IN to OUT stream copier (EOF binary check)

int main() {
    
    typedef int bool;
    enum {false, true};

    int c;
    bool isNotEOF = true;
    char str[] = "(getchar() != EOF) expression equals";

    while(isNotEOF) {
        isNotEOF = getchar() != EOF;

        if(isNotEOF == 1) {
            printf("%s 1!\n", str);
        } else if(isNotEOF == 0) {
            printf("%s 0!\n", str);
        }
    }

    return 0;
}
