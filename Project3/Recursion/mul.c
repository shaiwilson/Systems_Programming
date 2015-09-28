int mul(int a, int b);

int mul(int a, int b)
{
	int result;
	if (b == 1) 
	{
		result = a; // base case
	}
	else
	{
		result = a + mul(a, b - 1);
	}
	return result;
}