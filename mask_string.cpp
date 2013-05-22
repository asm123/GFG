#include <iostream>
#include <string>

using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;

int main (void)
{
	string str1, str2;
	cin >> str1 >> str2;
	bool count[256] = {false};
	
	for (int i = 0; str2[i]; i++)
	{
		int c = str2[i];
		count[c] = true;
	}
	string str = "";
	for (int i = 0; str1[i]; i++)
	{
		int c = str1[i];
		if (!count[c])
			str += str1[i];
	}
	
	cout << "String after masking: " << str << endl;
	
	return 0;
}
