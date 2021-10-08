#include <iostream>
using namespace std;

int main() {

	int iN;
	cout << "nhap N: ";
	cin >> iN;
	double sum = 0;
	for (int i = 1; i <= iN; i++)
	{
		sum += (1.0/i);
	}
	cout << "S= " << sum;
	system("pause");
	return 0;
}
