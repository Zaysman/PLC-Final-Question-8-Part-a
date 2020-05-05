#include <stdio.h>



int main() {
    int j;
    int i;

    j = -3;

    for(i = 0; i < 3; i++) {
        if((j+2) == 3 || (j+2) == 2) {
            j--;
        } else if((j+2) == 0) {
            j += 2;
        } else {
            j = 0;
        }
        
        if(j > 0) {
            continue;
        }
        j = 3 - i;
    }

    return 0;
}


