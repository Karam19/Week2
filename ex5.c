#include <stdio.h>

void print1(int n){
    printf("\n");
    for(int i=1;i<=n;i++) {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
}
void print2(int n){
    printf("\n");
    for(int i=1;i<=n/2;i++) {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    if (n%2!=0)
        for (int j = 1; j <= n/2+1; j++){
            printf("*");
            if (j==n/2+1)
            printf("\n");
        }
    for(int i=n/2;i>=1;i--) {
        for (int j = i; j >=1; j--)
            printf("*");
        printf("\n");
    }
}
void print3(int n){
    printf("\n");
    for(int i=1;i<=n;i++) {
        for (int j = 1; j <= n; j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    printf("Please enter n : ");
    int nn;
    scanf("%d",&nn);
    printf("Please chose figure 1,2 or 3 : ");
    int f;
    scanf("%d",&f);
    if (f==1)
        print1(nn);
    else if (f==2)
        print2(nn);
    else if (f==3)
        print3(nn);
    return 0;
}
