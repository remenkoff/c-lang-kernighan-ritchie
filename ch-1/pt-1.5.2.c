//
//  pt-1.5.2.c
//  C Programming Language (B. Kernighan, D. Ritchie)
//
//  Created by Ruslan Remenkov on 18/05/2019.
//  Copyright © 2019 Ruslan Remenkov. All rights reserved.
//

#include "stdio.h"

//  IN-stream symbols counter

int main() {
    
    double nc;

    for(nc = 0; getchar() != EOF; ++nc);

    printf("%.0f\n", nc);

    return 0;
}
