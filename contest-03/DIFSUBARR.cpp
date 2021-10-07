
#include <bits/stdc++.h>
#define N 100005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;

int n, k, a[N], x;
int main()
{
	fr("DIFSUBARR.INP");
	fw("DIFSUBARR.OUT");
	memset(a, 0, N);
	cin >> n;
	For(i, 1, n, 1)
	{
		cin >> x;
		if (a[x] == 0)
			k++;
		a[x]++;
	}
	cout << (((n * (k - 1)) / 2) + n);
	return 0;
}