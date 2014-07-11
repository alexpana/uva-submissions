#include <stdio.h>

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif

	int n, b, a;

	scanf("%d", &n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d %d", &a, &b);
		if (a<b) 	printf("<\n");
		if (a==b) 	printf("=\n");
		if (a>b) 	printf(">\n");
	}

	return 0;
}
