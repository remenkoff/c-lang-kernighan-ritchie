//
//  pt-1.5.1.c
//  C Programming Language (B. Kernighan, D. Ritchie)
//
//  Created by Ruslan Remenkov on 18/05/2019.
//  Copyright © 2019 Ruslan Remenkov. All rights reserved.
//

#include "stdio.h"

//  IN to OUT stream copier

int main() {
    
    int c;

    while((c = getchar()) != EOF)
        putchar(c);

    return 0;
}
