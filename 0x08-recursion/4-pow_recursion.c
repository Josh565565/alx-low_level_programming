/**
 * _pow_recursion - funt that returns the value of x raised to the power of y
 *
 * @x: integer to power
 *
 * @y: power to do
 *
 * Return: returns integer value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (1);
}
