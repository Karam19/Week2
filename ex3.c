#include <stdio.h>
void print3(int n){
    printf("\n");
    for(int i=1;i<=n;i++) {
        for (int j = 1; j <= n - i; j++)
            printf(" ");
        for(int j=1;j<=2*i-1;j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    printf("Please enter n : ");
    int nn;
    scanf("%d",&nn);
    print3(nn);
    return 0;
}
