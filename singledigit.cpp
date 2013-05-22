using namespace std;

#include <iostream>

int main ()
{
  int number = 872;  
  int answer = 1;
int step = 0;
    while (number > 0) 
  {
        answer=answer*(number % 10);
        number = number / 10;
	step++;
    }
    
    cout << "Product: " << answer << "\tSteps: " << step << endl;
    return 0;
}

