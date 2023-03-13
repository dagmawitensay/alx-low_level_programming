#include <stdio.h>
#include <stdlib.h>

void m(int n1,int n2, int n3)
{
	int *t;
	int sum;

	t = malloc(sizeof(*t) * 3);
	t[0] = n1;
	t[1] = n2;
	t[2] = n3;
	sum = n1 + n1 + n3;
	printf("%d + %d + %d = %d", t[0], t[1], t[2], sum);
	free(t);
}

int main(void)
{
	m(98, 2, 10);
}
