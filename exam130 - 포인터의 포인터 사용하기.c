#include <stdio.h>

void main(void)
{
	char* animal[3];
	char** ppanimal;

	animal[0] = "tiger";
	animal[1] = "lion";
	animal[2] = "rabbit";

	ppanimal = animal;

	puts(animal[0]);
	puts(ppanimal[1]);
	puts(ppanimal[2]);

}