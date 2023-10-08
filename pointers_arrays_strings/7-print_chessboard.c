#include "main.h"

/**
 * print_chessboard - print a chessboard
 * @a:array
 * Return:void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			char current_char = a[i][j];

			_putchar(current_char);
		}
		_putchar('\n');
	}
}
