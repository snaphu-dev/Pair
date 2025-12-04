#include "Pair.h"

using namespace std;

int main()
{
	Pair pair{ 1, 2 };
	int totalPair = pair.sum();

	cout << "Hello world," << " " << totalPair << " " << &totalPair << endl;
	return 0;
} 
