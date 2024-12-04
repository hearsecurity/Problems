//Write a function that returns the elements on odd positions in a list.

#include <stdio.h>

int main() {
    
    int numbers[] = {10,20,30,40,50,60}; 
    int odds[5];

    for(int i = 0; i < 6; i++) {
          if(i % 2 != 0 ) {
               odds[i] = numbers[i]; 
               printf("Odd: %d\n", odds[i]); 
          }else{
            continue; 
          }
    } 
    

return 0; 
}