using namespace std;

#include <iostream>
#include <cstring>

int global = 3;

int main (void)
{
	static int st;
	char str [100] = "i am a hacker";
	int count [26] = {0}, max = 0, len;
	char maxChar;
	len = strlen (str);
	
	for (int i = 0; i < len; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			  str[i] = str[i] + 32;
			int pos = str[i] % 26;
			count[pos]++;
			if (count[pos] > max)
			{
				max = count[pos];
				maxChar = str[i];
			}
		}
	}
	
	cout << maxChar << ": " << max << " times" << endl;
}