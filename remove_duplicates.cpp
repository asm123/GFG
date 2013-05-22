#include <iostream>
#include <cstdio>

using std :: cout;
using std :: cin;
using std :: endl;

int main (void)
{
	char str[] = "";
	scanf ("%s", str);
	int count[256] = {0};
	int ptr = 0;
	
	while (*(str + ptr))
	{
		char temp = *(str + ptr);
		int c = temp;
		if (count[c] == 0)
		{
			printf ("%c", temp);
			count[c] = 1;
		}
		ptr++;
	}
	
	cout << endl;
	
	return 0;
}
