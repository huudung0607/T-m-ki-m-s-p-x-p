#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int firstPos(vector<int> a, int l, int r, int x)
{
	int res = -1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x)
		{
			res = m;
			r = m - 1;
		}
		else if (a[m] > x)
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return res;
}
int lastPos(vector<int> a, int l, int r, int x)
{
	int res = -1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x)
		{
			res = m;
			l = m + 1;
		}
		else if (a[m] > x)
		{
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return res;
}
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	long long ans = 0;
	for (int i = 0; i < n; i++)
	{
		int p1 = firstPos(a, i + 1, n - 1, k - a[i]);
		int p2 = lastPos(a, i + 1, n - 1, k - a[i]);
		if (p1 != -1)
		{
			ans += p2 - p1 + 1;
		}
	}
	cout << ans;

}
