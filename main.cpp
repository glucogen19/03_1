#include <iostream>
using namespace std;
class Car {
	private:
		double X;
		int P;
		double V;
	public:
		Car(){
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
		}
};

int main() {
	Car Alpha;
	Alpha.out();
}