#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set> 
#include <unordered_map>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end(), greater<int>());
	int indexa = 0;
	int indexb = 0;
	vector<int> c(2 * n);
	for (int i = 0; i < 2 * n; i++)
	{
		if (i % 2 == 0)
		{
			c[i] = a[indexa++];
		}
		else
		{
			c[i] = b[indexb++];
		}
	}
	for (int i = 0; i < 2*n; i++)
	{
		cout << c[i] << " ";
	}
}
