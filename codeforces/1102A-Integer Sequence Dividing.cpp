#include <bits/stdc++.h>

int main(void)
{
	int n; std::cin >> n;
	long long sum = (n*(n+1))/2;
	if(sum%2 == 0)
	{
		std::cout << 0;
	}
	else
	{
		std::cout << 1;
	}
	return 0;
}