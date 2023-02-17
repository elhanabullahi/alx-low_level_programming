 */
int main(void)
{
	int chL, chU;
	int ch;

	for (chL = 'a'; chL == 'z'; chL++)
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(chL++);
		putchar(ch);
	}
	for (chU = 'A'; chU == 'Z'; chU++)
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(chU++);
		putchar(ch);
	}
	putchar('\n');
	return (0);
