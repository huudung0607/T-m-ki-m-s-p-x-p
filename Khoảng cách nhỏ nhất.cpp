#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
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
	stable_sort(a.begin(), a.end());
	int min = 100000;
	for (int i = 1; i < n; i++)
	{
		if (abs(a[i] - a[i - 1]) < min)
		{
			min = abs(a[i] - a[i - 1]);
		}
	}
	cout << min << endl;
}
