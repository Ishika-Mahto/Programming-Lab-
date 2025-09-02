#include <stdio.h>
int main()
{
	char c;
	printf("Enter a character to check whether vowel or consonent : ");
	scanf("%c",&c);
	if(c=='a'||c=='A'||c=='e'||c=='i'||c=='o'||c=='u'||c=='E'||c=='I'||c=='O'||c=='U')
		printf("The character is a vowel.");
	else 
		printf("The character is a consonent.");
	return 0;
}