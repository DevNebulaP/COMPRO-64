//password encoder
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *encode(char *str);
char *decode(char *str);

int main(int argc, char *argv[])
{

	char *str = "EARTH";
	printf("%s\n", encode(str));
	printf("%s\n", decode(encode(str)));
	return 0;
}

char *encode(char *str)
{
	int i = 0;
	int size = strlen(str);
	char *encoded = malloc(sizeof(char) * size);

	for(i = 0; i < size; i++)
	{
		encoded[i] = str[i] + 1;
	}
	return encoded;
}

char *decode(char *str)
{
	int i = 0;
	int size = strlen(str);
	char *decoded = malloc(sizeof(char) * size);

	for(i = 0; i < size; i++)
	{
		decoded[i] = str[i] - 1;
	}
	return decoded;
}