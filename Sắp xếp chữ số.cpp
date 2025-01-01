#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	set<int> se;
	for (int i = 0; i < n; i++)
	{
		while (a[i])
		{
			se.insert(a[i] % 10);
			a[i] /= 10;
		}
	}
	for (auto x : se)
	{
		cout << x << " ";
	}
}
