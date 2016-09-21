// Find the difference between the sum of the squares of the first one hundred natural numbers 
// and the square of the sum

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int N = 100;
	int sumsquare = 0;
	int squaresum = 0;
	int sum = 0;
		for (int n = 1;n < N + 1; n++) {
			sumsquare = sumsquare + pow(n, 2.0);
			sum = sum + n;
			squaresum = pow(sum, 2.0);
			int diff = squaresum - sumsquare;
			cout << "for n equals " << n << ", sum of the square is " << sumsquare << ", square of sum is " << squaresum << ". Difference is " << diff << endl;

		}
		system("pause");
		return 0;
}