//Write a function that concatenates two lists. [a,b,c], [1,2,3] → [a,b,c,1,2,3]

#include <stdio.h>

void concat(int numbers1[], int numbers2[]) {
    
    int concatenates[11] = {0}; 

    for(int i = 0; i < 6; i++) {
        concatenates[i] = numbers1[i];
        for(int i = 0; i < 5; i++) {
            concatenates[i+6] = numbers2[i]; 
        }        
    }
    for(int i = 0; i < 11; i++) {
        printf("Concatenated: %d\n", concatenates[i]);
    }
}

int main() { 
    
    int numbers1[] = {1,5,4,3,8,6}; 
    int numbers2[] = {11,76,43,31,45}; 

    concat(numbers1, numbers2); 

return 0;
}