#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
using namespace std;


int main()
{
	int n, l;
	cin >> n >> l;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	double maxR = max(a[0], l - a[n - 1]);
	for (int i = 1; i < n; i++)
	{
		maxR = max(maxR, (a[i] - a[i - 1]) / 2.0);
	}
	cout << fixed << setprecision(10) << maxR << endl;
}
