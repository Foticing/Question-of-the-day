#include <stdio.h>


int climbStairs(int n) {
    int p = 0, q = 0, r = 1;
    for (int i = 1; i <= n; ++i) {
        p = q;
        q = r;
        r = p + q;
    }
    return r;
}

int main(void)
{
    int i;
    i = climbStairs(2);
	printf("%d\n",i);
	return 0;
}
