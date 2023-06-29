 #include "main.h"

/**
* string_toupper - change the alphabet to uppercase
* @AtZ: holds string value
* Return: always AtZ
*/

char *string_toupper(char *AtZ)
{
	int l;

	l = 0;

	while (AtZ[l] != '\0')
	{
		if (AtZ[l] >= 'a' && AtZ[l] <= 'z')
		{
			AtZ[l] = AtZ[l] - 32;
		}
		l++;
	}

	return (AtZ);
}
