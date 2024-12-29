#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int i = 0, j = 0;
	int dem = 0;
	while (i < n && j < m)
	{
		if (a[i] > b[j])
		{
			i++;
			j++;
			dem++;
		}
		else
		{
			i++;
		}
	}
	cout << dem;
}
