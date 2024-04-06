/**
 * get_bit - it gets bit
 * @n: number
 * @index: index of number
 *
 * Return: I'm so lonely
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int x = sizeof(n) * 8;
if (index < x)
{
return ((n >> index) & 1);
}
return (-1);
