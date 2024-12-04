//Write a program that prints a multiplication table for numbers up to 12.

#include <stdio.h>

int main() {
    
    int n = 0; 
    int x = 9; 
    int y = 0; 

    while(n < 12) {
        y = 0; 
        while(y < x) {
            printf("Number: %d -> %d\n", n, n*y); 
            y++;
        }
    n++; 
    }

    return 0; 
}