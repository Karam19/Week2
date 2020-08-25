#include <stdio.h>

void swap(int *x, int *y) {

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}

int main() {
    printf("Please enter a : \n");
    int a,b;
    scanf("%d",&a);
    printf("Please enter b : \n");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
