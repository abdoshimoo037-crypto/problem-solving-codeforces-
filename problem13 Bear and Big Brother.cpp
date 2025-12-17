 #include<iostream>
using namespace std;
int main() {
	int a, b, ans = 0;
	cin >> a >> b;
	if (a == b) {
		cout << "1";
		return 0;
	}
	while (a <= b) {
		a *= 3;
		b *= 2;
		ans++;
	}
	cout << ans;
	return 0;

}