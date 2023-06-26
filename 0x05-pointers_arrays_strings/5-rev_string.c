#include "main.h"

/**
 * rev_string - updates the value of the variable
 *
 * @s: pointer to the first number
 *
 */
void rev_string(char *s)
{
	int count;
	int temp;
	int len;
	int num;
	int a;

	num = 0;
	a = 0;
	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	len = count;
	count = count - 1;
	while ((len / 2) > a)
	{
		temp = s[num];
		s[num] = s[count];
		s[count] = temp;
		count--;
		num++;
		a++;
	}
}
