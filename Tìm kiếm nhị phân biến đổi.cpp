#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int binarySearchFirst(vector<int> a, int l, int r, int x)
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
int binarySearchLast(vector<int> a, int l, int r, int x)
{
	int res = -1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] == x )
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

int lowerbound(vector<int> a, int  l, int r, int x)
{
	int res = -1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] >= x)
		{
			res = m;
			r = m - 1;
		}
		else
		{
			l = m + 1;
		}
	}
	return res;
}
int upperbound(vector<int> a, int l, int r, int x)
{
	int res = -1;
	while (l <= r)
	{
		int m = (l + r) / 2;
		if (a[m] > x)
		{
			res = m;
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
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int posfirst = binarySearchFirst(a, 0, n - 1, x);
	int poslast = binarySearchLast(a, 0, n - 1, x);
	int pos3 = lowerbound(a, 0, n - 1, x);
	int pos4 = upperbound(a, 0, n - 1, x);
	cout << posfirst << endl << poslast << endl << pos3 << endl << pos4 << endl;
	if (posfirst == - 1)
	{
		cout << 0 << endl;
	}
	else
	{
		cout << poslast - posfirst + 1 << endl;
	}
}
