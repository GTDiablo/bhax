#include<stdio.h>

int main(){
    unsigned long long int wordLength = 0, word = 1;

    while(word <<= 1){
        wordLength++;
    }
    
    wordLength++;
    printf("The word length on this PC is %llu bits\n", wordLength);
    return 0;
}