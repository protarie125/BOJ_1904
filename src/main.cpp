#include <iostream>
#include <vector>

using namespace std;

constexpr auto mod = int{ 15746 };

using vi = vector<int>;

vi memo;
int solve(int n) {
	for (int i = 2; i <= n; ++i) {
		memo[i] = (memo[i - 1] + memo[i - 2]) % mod;
	}

	return memo[n];
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	memo = vi(n + 1, -1);
	memo[0] = 1;
	memo[1] = 1;

	cout << solve(n);

	return 0;
}