#include <iostream>


using namespace std;


int main()
{
	float n, m, a, b, c;
	cin >> n;
	cin >> m;
	a = m++ - -n;
	cout << a << endl;

	cin >> n;
	cin >> m;
	b = m++ > ++n;
	cout << b << endl;

	cin >> n;
	cin >> m;
	c = n-- > --m;
	cout << c << endl;

}