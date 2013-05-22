#include <iostream>
#include <string>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

int main (void)
{
	string str;
	cin >> str;
	int count[256] = {0};
	
	for (int i = 0; str[i]; i++)
	{
		int c = str[i];
		count[c]++;
	}
	
	for (int i = 0; i < 256; i++)
	{
		if (count[i] > 1)
			cout << (char)i << ", " << count[i] << endl;
	}
	
	cout << endl;
	
	return 0;
}
