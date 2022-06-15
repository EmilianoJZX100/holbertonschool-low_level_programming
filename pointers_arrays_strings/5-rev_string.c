#include "main.h"
/**
 * rev_string - reverses a string
 * @s:string
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char t;

	for (i = 0; s[i] != '\0'; i++)
		;
	i = i - 1;

	while (j < i)
	{
		t = s[i];/**t es la variable temporal*/
		s[i] = s[j];/** i y j son las posc. de los itineradores dentro del array*/
		s[j] = t;
		i--;
		j++;
	}
}
