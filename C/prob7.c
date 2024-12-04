//Write a function that returns the largest element in a list.

#include <stdio.h>
#include <string.h>

int largest_element(int numbers[]) {

    int count = 0; 
    int c_number = 5;   

   for(int count = 0;  count < 4; count++) {

          if(c_number > numbers[count+1]) {
              continue;  
          } else{
             c_number = numbers[count+1]; 
          }
          count++; 
    }
    return c_number;  
}

int main() {
    
    int numbers[] = {5,3,12,2,7};
    int greater = largest_element(numbers); 
    printf("Greater: %d\n", greater); 

    return 0; 
}
