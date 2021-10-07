#include <bits/stdc++.h>
#define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n, m, p, a[N], b[N], c[N],mi = (N*10000),d;
int main()
{
	fr("b5.INP");
	fw("b5.OUT");
	cin >> n >> m >> p;
	For(i,1,n,1)
	{
		cin >> a[i];
	}
	For(i,1,m,1)
	{
		cin >> b[i];
	}
	For(i,1,p,1)
	{
		cin >> c[i];
	}
	return 0;
}