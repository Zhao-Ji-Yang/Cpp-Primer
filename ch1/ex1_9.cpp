#include <iostream>
using namespace std;
int main()
{
	int i=50;
	int sum = 0;
	while (i >= 50 && i <= 100)
	{
		sum = sum+i;
		i++;
	}
	std::cout << sum << std::endl;
    return 0;
}