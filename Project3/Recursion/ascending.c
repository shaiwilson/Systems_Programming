void ascending(int n);

void ascending(int n)
{
	if (n > 1)
        ascending(n - 1);
    printf ("%d", n);
}