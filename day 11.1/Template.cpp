#include <iostream>
#include <string>

int main()
{
	float bufferNumber{};
	char inputChar{};
	char inputChar2{};
	std::cout << "Welcome to the converter thingy. (m, i, f, y)\n";
	std::cin >> bufferNumber >> inputChar;
	std::cout << "to ";
	std::cin >> inputChar2;
	std::cout << "= ";
	// The following block of code uses nested switch cases
	// to convert inputted number to the desired result.
	switch (inputChar)
	{
	case 'm':
		switch (inputChar2)
		{
		case 'm':
			bufferNumber;
			break;

		case 'i':
			bufferNumber = bufferNumber * 39.37;
			break;

		case 'f':
			bufferNumber = bufferNumber * 3.28084;
			break;

		case 'y':
			bufferNumber = bufferNumber * 1.09361;
			break;
		}
		break;

	case 'i':
		switch (inputChar2)
		{
		case 'm':
			bufferNumber = bufferNumber * 0.0254;
			break;

		case 'i':
			bufferNumber;
			break;

		case 'f':
			bufferNumber = bufferNumber * 0.0833;
			break;

		case 'y':
			bufferNumber = bufferNumber * 0.02777778;
			break;
		}
		break;

	case 'f':
		switch (inputChar2)
		{
		case 'm':
			bufferNumber = bufferNumber * 0.305;
			break;

		case 'i':
			bufferNumber = bufferNumber * 12;
			break;

		case 'f':
			bufferNumber;
			break;

		case 'y':
			bufferNumber = bufferNumber * 0.33333;
			break;
		}
		break;

	case 'y':
		switch (inputChar2)
		{
		case 'm':
			bufferNumber = bufferNumber * 0.9144;
			break;

		case 'i':
			bufferNumber = bufferNumber * 36;
			break;

		case 'f':
			bufferNumber = bufferNumber * 3;
			break;

		case 'y':
			bufferNumber;
			break;
		}
		break;

	default:
		std::cout << "Invalid syntax. Now terminating the program.";
		break;

	}
	// The following code is for outputting grammar. (
	std::cout << bufferNumber;
	if(bufferNumber == 1)
	{
		switch (inputChar2)
		{
		case 'm':
			std::cout << " meter.";
			break;

		case 'i':
			std::cout << " inch.";
			break;

		case 'f':
			std::cout << " foot.";
			break;

		case 'y':
			std::cout << " yard.";
			break;
		}
	}
	else
	{
		switch (inputChar2)
		{
		case 'm':
			std::cout << " meters.";
			break;

		case 'i':
			std::cout << " inches.";
			break;

		case 'f':
			std::cout << " feet.";
			break;

		case 'y':
			std::cout << " yards.";
			break;
		}
	}
	std::cout << "\n";
	return 0;
}

