#include <bits/stdc++.h>
// #define N 1000005
#define fr(name) freopen(name, "r", stdin);
#define fw(name) freopen(name, "w", stdout);
#define For(value, begin, end, up) for (int value = begin; value <= end; value += up)
#define For2(value, begin, end, up) for (int value = begin; value >= end; value -= up)
#define elf else if
// typedef unsigned long long ll;
using namespace std;

string a, b, s, s1;
int lb, x, m=0;

bool kt(string s)
{
	int l = s.size(), t = (l / 2);
	string a = s.substr(0,t);
	if(l%2!=0) t += 1;
	string b=s.substr(t,l-1);
	if(a!=b)
		return false;
	return true;
}

int main()
{
	fr("JOINPALIN.INP");
	fw("JOINPALIN.OUT");
	getline(cin, a);
	getline(cin, b);
	lb = b.size();
	For2(i, a.size(), 1,1)// Tu xau dai nhat
	{
		s = a.substr(0, i); // sao chep xau
		For2(j, lb, 0, 1)
		{
			s1 = s + b.substr(j, lb);//xau s từ xâu a roi + voi xau b luon
			if(kt(s1))// kt đối xứng dòng 14
			{
				x = s1.size();//ko -1 nha vì tính từ 1 ko phải từ 0
				if(x>m)
					m = max(m, x);
			}else// VD: ab ko doi xung ==> cac xau tiep theo cx ko doi xung
				break;
		}
	}
	
	cout << m;
	return 0;
}