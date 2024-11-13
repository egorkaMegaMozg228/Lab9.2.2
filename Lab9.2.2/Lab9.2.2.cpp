#include <iostream>
#include <cmath>
using namespace std;
double CalcH1(double a, double b, double c) {
	double H1;
	H1 = sqrt(1 / (1 / pow(a, 2) + 1 / pow(b, 2)));
	return H1;
}
int main() {
	double H, a, b,c, H1;
	cout << "a = "; cin >> a;
	cout << endl;
	cout << "b = "; cin >> b;
	cout << endl;
	cout << "c = "; cin >> c;
	cout << endl;
	if (a * a + b * b == c * c) {
		cout << "true" << endl;
		H = a * b / c;
		H1 = CalcH1(a, b, c);
		cout << "H = " << H << endl;
		cout << "H1 = " << H1 << endl;
		if (H1 == H) cout << "true";
		else cout << "false";
	}
	else cout << "false"; return 0;

}