//Write three functions that compute the sum of the 
//numbers in a list: using a for-loop, a while-loop and recursion. 
//(Subject to availability of these constructs in your language of choice.)

#include <stdio.h> 

void for_sum(int numbers[]) {
    
    int sum = 0;; 
    for(int i = 0; i < 6; i++) {
         sum += numbers[i]; 
    }
    printf("Sum: %d\n", sum); 
}

void while_sum(int numbers[]) {
    
    int sum; 
    int count = 0; 

    while(count < 6) {
        sum += numbers[count];
        count++; 
    }
    printf("Sum: %d\n", sum/2); 
}

int main() {

    int numbers[] = {6,4,1,3,7,2}; 
    for_sum(numbers); 
    while_sum(numbers); 
}