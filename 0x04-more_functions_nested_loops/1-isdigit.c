/**
 * _isdigit - checks whether it is number,
 * or not.
 *
 * @c: the test letter.
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	int a;

	a = (c >= '0' && c <= '0') ? 1 : 0;
	return (a);
}
