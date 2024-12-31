#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
using namespace std;

int tong(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int cmp(int a, int b)
{
	if (tong(a) != tong(b))
	{
		return tong(a) < tong(b);
	}
	return a < b;
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
