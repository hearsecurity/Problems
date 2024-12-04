// Write function that reverses a list, preferably in place.

#include <stdio.h>
#include <string.h>

void reverse_list(int numbers[]) {

    int size = 8;
    
    for(int count = 1; count < size+1; count++) {
        printf("Number: %d\n", numbers[size-count]);      
    }

}
int main() {
    
    int numbers[] = {6,5,10,3,4,2,1,0};
    reverse_list(numbers);
    return 0; 
}