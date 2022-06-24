#include "main.h"
/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: ancho
 * @height: alto
 * Return: mirta
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **mirta;

	if (width < 1)
		return (NULL);
	if (height < 1)
		return (NULL);
	mirta = malloc(height * sizeof(int *));
	if (mirta == NULL)
		return (NULL);
	free(mirta);
	for (i = 0; i < height; i++)
	{
		mirta[i] = malloc(width * sizeof(int));
		if (mirta[i] == NULL)
			return (NULL);
		free(mirta);
		for (j = 0; j < width; j++)
		{
			mirta[i][j] = 0;
		}
	}
	return (mirta);
}