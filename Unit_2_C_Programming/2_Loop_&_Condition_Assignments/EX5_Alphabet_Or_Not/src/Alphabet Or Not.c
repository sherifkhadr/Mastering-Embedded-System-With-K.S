/*
 ============================================================================
 Name        : Alphabet.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	printf("Enter a character \n");
	fflush(stdout);
	scanf("%c", &ch);

	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
		printf("%c Is Alphabet",ch);
	else
		printf("%c Is Not Alphabet",ch);
	return 0;

}
