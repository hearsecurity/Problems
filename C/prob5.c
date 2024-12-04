
//Modify the previous program such that only multiples of three or 
//five are considered in the sum.

#include <stdio.h>

int main() {

     int num = 0;
    int count = 0;
    int res = 0; 

    printf("Type a number: "); 
    scanf("%d", &num); 

    while(count < num) {
        
        if((num % 3 == 0) || (num % 5 == 0)){
            printf("Sum: %d\n", num); 
            res += num; 
        }
        count++; 
    }
    printf("Result: %d\n", res); 

return 0; 
}
