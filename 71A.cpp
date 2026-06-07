#include <iostream>
#include <string>
using namespace std;

int	main()
{
	int	nwords{};
	cin >> nwords;
	string words[nwords];
	for (string &word : words)
		cin >> word;
	for (const string& word : words)
	{
		if (word.size() > 10)
		{
			cout << word[0] << word.size() - 2 << word[word.size() - 1] << '\n';	
			continue;
		}
		cout << word << '\n';
	}
	return (0);
}
