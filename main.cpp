#include <iostream>

using namespace std;
// asdasd
int main() 
{
	int key = 3;
	string str;
	cin >> str;
    int newChar;

	for (int i = 0; i < str.size(); i++)
	{
		if (97 >= int(str[i]) <= 122)
		{
			newChar = 97 + (int(str[i]) + key) % 97;
		};

		cout << char(newChar);
	}
}