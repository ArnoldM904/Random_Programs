// Project Euler - Problem 1
// Find Multiples of 3 and 5

#include "stdafx.h" // For users running in Microsoft Visual Studio 2013
#include <iostream>
		// NOTE: You could add "using namespace std;" here to replace the "std::"s in the program.
int main()
{
	int answer = 0;
	for (int x=0; x<1000; x++) // Uses X to check numbers up to 1000.
	{ 
		if (x % 5 == 0 || x % 3 == 0) // If X if divisable by 5 or 3 execute below code
		{ 
			answer += x; // Add number to total sum (Also written as "answer = answer + x;")
		}
	}
	
	std::cout << "The sum of all multiples of 3 and 5 is " << answer << ".\n\n";

	char z;    // Used to require user input before closing application
	std::cin >> z;  // .. Thus preventing the application to be closed before the answer can be seen.
	return 0;  
}

