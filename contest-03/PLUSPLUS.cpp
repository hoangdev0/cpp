#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;

int t,a,b,n;

int pp(int a, int b, int n)
{
	int d(0);
	while(a <=n || b <= n)
	{
		if(a>b)
			{
				b += a;
				d++;
			}
		else
			{
				a += b;
				d++;
			}
	}
	if(d>0) return d-1;
	return d-1;
}

int main()
{
	fr("PLUSPLUS.INP");
	fw("PLUSPLUS.OUT");

	cin >> t;
	For(i,1,t,1)
	{
		cin >> a >> b >> n;
		cout << (int)pp(a, b, n) << endl;
	}
	return 0;
}