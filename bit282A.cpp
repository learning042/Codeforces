#include <iostream>
#include <string>
using namespace std;

int	main()
{
	int	nStat{};
	int	x{ 0 };
	string	stat(3, '\0');
	cin >> nStat;
	for (int i = 0; i < nStat; ++i)
	{
		cin >> stat; 
		if (stat[1] == '+')
			++x;
		else
			--x;		
	}
	cout << x << '\n';
}
