#include <iostream>

int main()
{
	int a = 0;
	long long b = 0;
	char c = 'a';
	float d = 3.14;
	double e = 40.9602;

	std::cin >> a >> b >> c >> d >> e;
	std::cout << a << "\n"
			  << b << "\n"
			  << c << "\n"
			  << d << "\n"
			  << e;
	return 0;
}