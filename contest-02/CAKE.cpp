#include <bits/stdc++.h>
#define N 1005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define For2(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
struct cake
{
	int p;
	int k;
};
int l, n, p, k, c[N], b[N];
cake a[N];
int main()
{
	memset(c, 0, N);
	fr("CAKE.INP");
	fw("CAKE.OUT");
	cin >> l >> n;
	For(i, 1, n, 1)
	{
		cin >> a[i].p >> a[i].k;
	}
	For2(i, n, 1, 1)
	{
		fill(c + 1 + a[i].p, c + 2 + a[i].k, i);
	}
	For(i, 1, l+1, 1)
	{
		if (c[i] != 0)
			b[c[i]]++;
	}
	int ma = 0, v;
	For(i, 1, l+1, 1)
	{
		if(b[i] > ma){
			v = i;
			ma = b[i];
		}
	}
	cout << endl << ma << "\n";
	cout << v;
	return 0;
}