#include <iostream>

using namespace std;
 int hcf(int n1, int n2)
{
	if (n2 != 0)
		return hcf(n2, n1 % n2);
	else
		return n1;
}
int main()
{
	int n1, n2, result;
	cout << "Enter two positive integers: ";
	cin >> n1 >> n2;

	result=hcf(n1, n2);
    cout << "HCF of " << n1 << " and " << n2 << " is: " << result ;

	return 0;
}


