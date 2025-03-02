#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p = malloc(sizeof(int));
    int *q = calloc(1, sizeof(int));
    *p = 10;
    *q = 20;
    int *r = malloc(2 * sizeof(int));
    r = realloc(r, 3 * sizeof(int));
    if(r){
        r[0] = *p;
        r[1] = *q;
        r[2] = 30;
        printf("%d %d %d\n", r[0], r[1], r[2]);
    }
    free(p);
    free(q);
    free(r);
    return 0;
}