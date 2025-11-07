#include <stdio.h>
#include <string.h>
#include <ctype.h> // Optional: to handle case insensitivity if needed

// Function to check if a string is a palindrome
int isPalindrome(char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    // Compare characters from both ends moving inwards
    while (end > start) {
        // Simple case-sensitive check
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // It is a palindrome
}

int main() {
    char str1[] = "madam";
    char str2[] = "hello";

    printf("String '%s' is %s\n", str1, isPalindrome(str1) ? "a palindrome" : "NOT a palindrome");
    printf("String '%s' is %s\n", str2, isPalindrome(str2) ? "a palindrome" : "NOT a palindrome");

    return 0;
}