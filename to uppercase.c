#include<stdio.h>

void to_upper(char alphabet)
{
	if (alphabet >= 'a'&&alphabet <= 'z')
	{
		printf("%c\n", alphabet - 32);
	}
	else
	{
		printf("%c\n", alphabet);
	}

	return 0;
}

int main()
{
	char input;

	//input the character
	printf("Please enter a character: ");
	scanf("%c", &input);

	to_upper(input);
	return 0;
}