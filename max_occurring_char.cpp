#include <iostream>
#include <cstdio>

using std :: cout;
using std :: cin;
using std :: endl;

int main (void)
{
	char str[] = "", maxChar;
	scanf ("%s", str);
	int count[256] = {0}, max = 0;
	
	for (int i = 0; str[i]; i++)
	{
		int c = str[i];
		count[c]++;
		if (count[c] >= max)
		{
			max = count[c];
			maxChar = str[i];
		}
	}	
	cout << "Max char: " << maxChar << endl;
	
	return 0;
}
