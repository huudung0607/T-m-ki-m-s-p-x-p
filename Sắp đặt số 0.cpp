#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <cmath>
#include <algorithm>
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
	vector<int> res;
	vector<int> zero;
	for (auto x : a)
	{
		if (x == 0)
		{
			zero.push_back(x);
		}
		else
		{
			res.push_back(x);
		}
	}
	for (auto x : res)
	{
		cout << x << " ";
	}
	for (auto x : zero)
	{
		cout << x << " ";
	}
}
