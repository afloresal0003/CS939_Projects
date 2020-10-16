#include <iostream>
using namespace std;

void main()
{
	int arrowHeadWidth = 7;
	int arrowLength = 9;
	int arrowTailWidth = 3;

	char outputChar = '*';

	//Arrow Head
	//loop to keep running until the height has been met
	for (int height = 1; height <= arrowHeadWidth; height += 2)
	{
		// loop to output the spaces
		for (int spaces = arrowHeadWidth; spaces > height; spaces -= 2)
		{
			cout << " ";
		}
		// loop to output the character for the body of the arrow
		for (int stars = 0; stars < height; stars++)
		{
			cout << outputChar;
		}
		cout << endl;
	}

	int arrowTailLength = arrowLength - (arrowHeadWidth / 2) - 1;

	//Arrow Tail
	for (int r = 0; r < arrowTailLength; r++)
	{
		for (int c = 0; c < arrowTailWidth; c++)
		{
			cout << 'outputChar';
		}
		cout << endl;
	}
	return 0;
}