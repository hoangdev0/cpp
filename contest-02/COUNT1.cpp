#include <bits/stdc++.h>
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
using namespace std;
int n,x,c(0),l(0);
int main()
{
	fr("COUNT1.INP");
	fw("COUNT1.OUT");
	cin >> n;
	For(i,1,n,1)
	{
		cin >> x;
		if(x%2==0 && x != 0) c++;
		elf(x != 0) l++;
	}
	if(c-1>0 && l-2>0) cout << ((c - 1) * 2 + (l - 2) * 2);
	else{
		int resault = c + l - 1;
		if(resault < 0) cout << 0;
		else cout << resault;
	}
	return 0;
}