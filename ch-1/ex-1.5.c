//
//  ex-1.5.c
//  C Programming Language (B. Kernighan, D. Ritchie)
//
//  Created by Ruslan Remenkov on 18/05/2019.
//  Copyright © 2019 Ruslan Remenkov. All rights reserved.
//

#include "stdio.h"

//  Fahrenheit to Celsius converter using `for` operator

int main() {
    
    float fahr;

    for(fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3.0f\t%6.2f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    
    return 0;
}
