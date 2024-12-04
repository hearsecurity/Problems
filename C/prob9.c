//Write a function that checks whether an element occurs in a list.

#include <stdio.h>

void check_element(int numbers[]) {

    int element = 3; 

    for(int count = 0; count < 5; count++) {
           if(element != numbers[count]) {
               continue;
           }else{
              printf("Found: %d\n", element); 
              break; 
           }
    }

}
int main() {

    int numbers[] = {1,4,3,5,2}; 
    check_element(numbers); 

return 0; 
}