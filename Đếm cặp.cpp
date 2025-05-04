
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	vector<long long>a(n), b(m);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	sort(b.begin(), b.end());
	int cnt0 = upper_bound(b.begin(), b.end(), 0) - b.begin();
	int cnt1 = upper_bound(b.begin(), b.end(), 1) - lower_bound(b.begin(), b.end(), 1);
	int cnt2 = upper_bound(b.begin(), b.end(), 2) - lower_bound(b.begin(), b.end(), 2);
	int cnt3 = upper_bound(b.begin(), b.end(), 3) - lower_bound(b.begin(), b.end(), 3);
	int cnt4 = upper_bound(b.begin(), b.end(), 4) - lower_bound(b.begin(), b.end(), 4);
	long long sum = 0;
	for (auto x : a) {
		if (x == 0) {
			continue;
		}
		else if (x == 1) {
			sum += cnt0;
		}
		else
		{
			int pos = upper_bound(b.begin(), b.end(), x) - b.begin();
			sum += (m - pos) + cnt0 + cnt1;
			if (x == 2) {
				sum -= (cnt3 + cnt4);
			}
			if (x == 3) {
				sum += cnt2;
			}
		}
		
	}
	cout << sum;
}

