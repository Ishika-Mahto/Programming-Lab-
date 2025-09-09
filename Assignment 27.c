#include<stdio.h>
int main() 
{
    char ch;
    printf("Enter the characters : \n");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'u':
        case 'U':
        case 'o':
        case 'O':
        	printf("Vowel\n");
        default:
            printf("Consonant\n");
    }
    return 0;
}