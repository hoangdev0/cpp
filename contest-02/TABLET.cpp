#include<bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name,"r",stdin);
#define fw(name) freopen(name,"w",stdout);
#define For(value,begin,end,up) for(int value = begin;value <= end;value+=up)
#define elf else if
typedef unsigned long long ll;
using namespace std;
int n, m, k, a, b, c;
int main()
{
	fr("TABLET.INP");
	fw("TABLET.OUT");
	cin >> n >> m >> k >> a >> b >> c;
	int x = n * a; //Joffrey
	int y = m * b; //Robb 
	int z = k * c; //Stannis
	int ma = max(x,max(y, z));
	if(x == ma) cout << "Joffrey ";
	if(y == ma) cout << "Robb ";
	if(z == ma) cout << "Stannis ";
	return 0;
}