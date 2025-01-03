#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
using namespace std;


int main()
{
	int n;
	cin >> n;
	vector<int> a(n + 1), b(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	int j = 1;
	for (int i = 1; i <= n; i+=2)
	{
		b[i] = a[j++];
	}
	for (int i = 2; i <= n; i += 2)
	{
		b[i] = a[j++];
	}
	for (int i = 1; i <= n; i++)
	{
		cout << b[i] << " ";
	}
}
