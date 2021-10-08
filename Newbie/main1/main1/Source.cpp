#include <iostream>
using namespace std;

int main() {

	int iN;
	cout << "nhap N: ";
	cin >> iN;
	long sum = 0;
	for (int i = 1; i <= iN; i++)
	{
		sum += i;
	}
	cout << "S=1+2+3..+N= " << sum;
	system("pause");
	return 0;
}