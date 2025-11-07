#include <stdio.h>

int main() {
    const int MAX_ROWS = 4;
    
    char current_char = 'A';
    
    printf("Generated Pattern:\n");

    for (int i = 1; i <= MAX_ROWS; i++) {
        
        int num_spaces = 2 * (MAX_ROWS - i);
        for (int k = 0; k < num_spaces; k++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("%c", current_char);
            current_char++;
        }
        
        printf("\n");
    }

    return 0;
}