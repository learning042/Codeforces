#include <iostream>
using namespace std;

int	main()
{
	int	nProblems{};
	int	Petnya{};
	int	Vasya{};
	int	Tonya{};
	int	solved{ 0 };
	cin >> nProblems;
	for (int i = 0; i < nProblems; ++i)
	{
		cin >> Petnya >> Vasya >> Tonya;
		if (Petnya + Vasya + Tonya >= 2)
			++solved;
	}
	cout << solved << '\n';
	return (0);
}
