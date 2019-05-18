//
//  ex-1.9.c
//  C Programming Language (B. Kernighan, D. Ritchie)
//
//  Created by Ruslan Remenkov on 18/05/2019.
//  Copyright © 2019 Ruslan Remenkov. All rights reserved.
//

#include "stdio.h"

//  Program replaces all spaces with only one for each new line

int main() {
    
    typedef int bool;
    enum {false, true};

    int c;
    bool isNeedsToRemoveSpace = false;

    while ((c = getchar()) != EOF) {

        // switch (c) {
        //     case '\n':
        //         isNeedsToRemoveSpace = false;
        //         break;

        //     case ' ':
        //         if (!isNeedsToRemoveSpace) {
        //             putchar(c);
        //             isNeedsToRemoveSpace = true;
        //         }

        //     default:
        //         putchar(c);
        // }

        if (c == '\n') {
            isNeedsToRemoveSpace = false;
        } else if (c == ' ') {
            if (!isNeedsToRemoveSpace) {
                putchar(c);
                isNeedsToRemoveSpace = true;
            }
        } else {
            putchar(c);
        }
    }

    return 0;
}
