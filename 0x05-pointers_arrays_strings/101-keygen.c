#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - keygen for 101-crackme
 *Return: 0 (success)
 */
int main(void)
{
	/*key extracted after decompiling the file*/
	int key = 2772;
	int i;
	int _random;

	srand(time(NULL));
	for (i = 0; key > 72; i++)
	{
		/*Generate random between 1 and 72*/
		_random = rand() % 72 + 1;
		printf("%c", _random);
		key -= _random;
	}
	printf("%c", key);
	return (0);
}
