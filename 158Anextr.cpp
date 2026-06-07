#include <iostream>
using namespace std;

int	main()
{
	int	n{};
	int	k{};
	int	advanced{ 0 };
	int	part{};
	int	kpart{};

	cin >> n;
	cin >> k;
	if (k < 0 || n < 0)
	{
		cout << 0 << '\n';
		return (0);
	}
	while (k-- && n)
	{	
		cin >> part;
		if (part <= 0)
		{
			cout << advanced << '\n';
			return (0);
		}
		++advanced;
		--n;
	}
	kpart = part;
	cin >> part;
	while (part == kpart && n)
	{
		++advanced;
		cin >> part;
		--n;
	}
	cout << advanced << '\n';
	return (0);
}
