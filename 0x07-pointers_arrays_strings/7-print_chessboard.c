#include "main.h"

/**
 * print_chessboard - print chessboard.
 * @a: multi dimensional array
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(*(*(i + a) + j));
		}
	putchar('\n');
	}
}
