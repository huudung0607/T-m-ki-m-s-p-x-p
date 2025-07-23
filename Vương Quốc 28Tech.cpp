
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
	int n; cin >> n;
	vector<long long> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	long long sum = 0;
	long long med = a[n / 2];
	for (int i = 0; i < n/2; i++) {
		sum = sum + abs(a[i] - med);
	}
	for (int i = n/2; i < n; i++) {
		sum = sum + abs(a[i] - med);
	}
	cout << sum;
}	

