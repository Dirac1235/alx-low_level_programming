/**
 * _isdigit - returns if the character is
 * @c: the character being tested
 * Return: 1 for a digit, 0 for not a digit
 */
int _isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}
