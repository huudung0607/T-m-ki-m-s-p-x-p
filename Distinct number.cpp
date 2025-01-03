#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set> 
#include <map>
#include <unordered_map>
using namespace std;
int main()
{
	int n;
	cin >> n;
	set<int> se;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		se.insert(x);
	}
	cout << se.size() << endl;
}
