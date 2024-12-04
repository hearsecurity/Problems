//Write a program that asks the user for a number n and prints the
// sum of the numbers 1 to n

#include <stdio.h>

int main() {
    
    int num = 0;
    int count = 0;
    int res = 0; 

    printf("Type a number: "); 
    scanf("%d", &num); 

    while(count < num) {
        res += num; 
        count++; 
    }
    printf("Result: %d\n", res); 

return 0; 
}
