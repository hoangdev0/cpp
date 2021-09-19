#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int main()
{
	fr("DIVISORS.INP");
	fw("DIVISORS.OUT");
	int n,d=0;
	cin >> n;
	For(i,1,n,1)
	{
		int r = 2;
		For(j,2,sqrt(i),1)
		{
			if(i%j==0)
				r+=2;
			if(j*j==i)
				r--;
		}
		if(r == 4)
			d++;
	}
	cout << d;
	return 0;
}