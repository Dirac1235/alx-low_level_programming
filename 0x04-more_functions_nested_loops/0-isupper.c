/**
 * _isupper - checks whether it is uppercase,
 * or lower case.
 *
 * @c: the test letter.
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	int a;

	a = (c >= 'A' && c <= 'Z') ? 1 : 0;
	return (a);
}
