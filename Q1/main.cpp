#include <stdio.h>
#include <algorithm>
using namespace std;

int sum(int *a,int j)
{
	int last = 0, ans = 0, i = 0;
	for (i = 1; i <= j; i++)
	{
		last = max(0, last) + a[i];
		ans = max(ans, last);
	}
	return ans;
}

int main()
{
	return 0;
}