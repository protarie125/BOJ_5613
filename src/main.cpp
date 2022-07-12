#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int ans;
	cin >> ans;

	auto isNum = bool{ false };
	int v;
	string p;
	while (true) {
		if (isNum) {
			cin >> v;

			if ("+" == p) {
				ans += v;
			}
			else if ("-" == p) {
				ans -= v;
			}
			else if ("*" == p) {
				ans *= v;
			}
			else if ("/" == p) {
				ans /= v;
			}

			isNum = false;
		}
		else {
			cin >> p;

			if ("=" == p) {
				cout << ans;
				return 0;
			}

			isNum = true;
		}
	}

	return 0;
}