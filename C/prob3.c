//Write a program that asks the user for their name and greets them with their name.

#include <stdio.h>

int main() {
    
    char name[30]; 
    printf("What's your name: ");
    scanf("%s", name); 
    printf("Congratulations %s!\n", name); 

return 0; 
}
