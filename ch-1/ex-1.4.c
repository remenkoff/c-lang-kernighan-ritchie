//
//  ex-1.4.c
//  C Programming Language (B. Kernighan, D. Ritchie)
//
//  Created by Ruslan Remenkov on 15/05/2019.
//  Copyright © 2019 Ruslan Remenkov. All rights reserved.
//

#include "stdio.h"

//  Fahrenheit from Celsius converter using `while` operator

int main() {
    
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    celsius = lower;
    
    printf("\n\nCelsius to Fahrenheit\n\n");
    while(celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%3.0f\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
    return 0;
}
