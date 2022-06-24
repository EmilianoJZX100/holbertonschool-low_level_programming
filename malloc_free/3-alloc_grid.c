#include "main.h"
/**
 *
 */
int **alloc_grid(int width, int height);
{
	int i;
	int j;
	int **mirta;

	mirta = malloc(width * height * sizeof(int));
	if (mirta == NULL)
	{
		return (NULL);
	}
	for(i = 0; i < width; i++)
	{
		for(j = 0; j < height; j++)
		{
			mirta[i][j] = 0;
			j++;
		}
		i++;
	}
	return (mirta);
}
