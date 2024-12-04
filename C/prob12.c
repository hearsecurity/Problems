//Write a function on_all that applies a function to every element of a list. 
//Use it to print the first twenty perfect squares. 

#include <stdio.h>

void print_squares() {

    for(int i = 0; i < 20; i++) {
        printf("Square of %d: %d\n", i, i * i); 
    }
}

int main() {

    print_squares(); 
    return 0; 
}