#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    int x = INT_MAX;
    float f = FLT_MAX;
    double d = DBL_MAX;
    printf("size of x = %zu\nsize of f = %zu\nsize of d = %zu\n",sizeof(x),sizeof(f),sizeof(d));
    printf("INT max = %d\nFLT max = %f\nDBL max = %f\n",x,f,d);
    return 0;
}
