int min(int a[], int start, int end);

int min(int a[], int start, int end)
{

	if (start < end) {
		if (a[start] < a[end])
		{
			end --;
			return min(a, start, end);
		}
		else
		{
			start++;
			return min(a, start, end);
		}
	}
	return a[end];
}