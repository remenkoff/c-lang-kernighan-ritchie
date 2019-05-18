//
//  pt-1.4.c
//  C Programming Language (B. Kernighan, D. Ritchie)
//
//  Created by Ruslan Remenkov on 18/05/2019.
//  Copyright © 2019 Ruslan Remenkov. All rights reserved.
//

#include "stdio.h"

#define LOWER 0
#define UPPER 300
#define STEP 20

//  Fahrenheit to Celsius converter using `for` operator (shorter version)

int main() {
    
    for(float fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3.0f\t%6.2f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    
    return 0;
}
