#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	string str;
	cin >> str;
	int size = str.size();
	int counter = 0;
	sort(str.begin(), str.end());
	for (int i = 0; i < size; i++) {
		if (str[i] == str[i + 1]) {
			counter++;}}
	int ans = size - counter;
	if (ans % 2 == 0) {
		cout << "chat with her";}
	else {
		cout << "ignor him";}
}
