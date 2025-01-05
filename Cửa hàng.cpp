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
	int n;
	cin >> n;
	vector<int> den(n), di(n);
	for (int i = 0; i < n; i++)
	{
		cin >> den[i] >> di[i];
	}
	sort(den.begin(), den.end());
	sort(di.begin(), di.end());
	int cnt = 1, maxval = 0, i = 1, j = 0;
	while (i < n && j < n)
	{
		if (den[i] <= di[j])
		{
			cnt++;
			maxval = max(cnt, maxval);
			i++;
		}
		else
		{
			cnt--;
			j++;
		}
	}
	cout << maxval;
}
