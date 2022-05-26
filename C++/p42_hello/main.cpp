#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	
	for (int i = 1; i < 10; i++)
	{
		for (int j = 2; j < 10; j++)
		{
			std::cout << j << "x" << i << "=" << i * j << "\t";

		}
		cout << endl;
	}

}