#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define elf else if
typedef unsigned long long ll;
using namespace std;

string s,t;
int n;

int main()
{
	fr("LOOKSAY.INP");
	fw("LOOKSAY.OUT");

	cin >> n;

	For(i,1,n,1)
	{
		int d(1);
		t = "";
		cin >> s;
		For(i,0,s.size()-1,1)
		{
			if(s[i]==s[i+1])
				d++;
			else{
				cout << d << s[i];
				d = 1;
			}
		}
		cout << endl;
	}

	return 0;
}