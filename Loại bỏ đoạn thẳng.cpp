
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
bool cmp(pair<long long, long long> a, pair<long long, long long >b) {
	return a.second < b.second;
}
int main()
{
	int n;
	cin >> n;
	vector<pair<long long, long long>> v;
	for (long long i = 0; i < n; i++)
	{
		long long x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end(),cmp);
	long long cnt = 0;
	long long minval = -1;
	for (int i = 0; i < n; i++) {
		if (v[i].first >= minval) {
			cnt++;
			minval = v[i].second;
		}
	}
	cout << n - cnt;
}

