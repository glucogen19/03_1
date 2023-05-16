#include <iostream>
using namespace std;
class Car {
private:
	double X;
	int P;
	double V;
public:
	Car() {
		X = 0;
		P = 0;
		V = 0;
	}
	Car(double A, int B, double C) {
		X = A;
		P = B;
		V = C;
	}
	void out() {
		cout << X << P << V;
		cout << X << ' ' << P << ' ' << V << '\n';
	}
};

int main() {
	Car Alpha;
	cout << "Alpha: ";
	Alpha.out();
	Car Beta(1, 2, 3);
	cout << "Beta:  ";
	Beta.out();
}