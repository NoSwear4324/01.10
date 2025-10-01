#include "Xerox.h"

void Xerox::copyFile(string fileName, int copy)
{
	scanFile(fileName);
	printFile(text, fileName, copy);

}
