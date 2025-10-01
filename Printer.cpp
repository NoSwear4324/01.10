#include "Printer.h"

void Printer::printFile(string text, string fileName, int copy)
{
	for (int i = 0; i < copy; i++) {
		string name = "Copy_" + to_string(i) + "_" + fileName;
		ofstream file(name);
	}
}
