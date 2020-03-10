#include <stdio.h>

int main(){
    int x;
    printf("Adjon meg egy értéket: ");
    scanf("%d", &x);
    for(int i=0; i<x; ++i)
        printf("1");
    printf("\n");
    return 0;
    
}