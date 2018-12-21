#include <stdio.h>

/* Prompts user to enter their name.
    Prints out greeting to the user, using their full name.
    Unknown number of names.*/

int main (){

	char name[256]; // The longest name in the world is 85 characters.
	printf("What is your name? \n");
	gets(name, 256, stdin);
	printf("Hello %s!\n", name);

	return 0;
}
