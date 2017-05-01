#include "bits.h"

void isolate(int* n, int digit){
    *n =  (*n & (1 << digit)) >> digit;
}

int main(){
    int x = 45;
    isolate(&x,1);
    printf("%x\n",x);
    printf("%i\n",x );

    printf("%x\n",45 );
}
