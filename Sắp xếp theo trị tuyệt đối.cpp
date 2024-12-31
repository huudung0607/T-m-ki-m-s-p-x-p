#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int cmp(int a, int b)
{
	return abs(a) < abs(b);
}

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	stable_sort(a.begin(), a.end(), cmp);
	for (auto x : a)
	{
		cout << x << " ";
	}
}
