#include "Printer.h"

void Printer::printFile(string text, string fileName, int copy)
{
	for (int i = 0; i < copy; i++) {
		string name = "Copy_" + to_string(i) + "_" + fileName;
		ofstream file(name);
		if (file.is_open()) {
			file << text;
			file.close();
		}
	}

	for (int i = 0; i < copy; i++) {
		string name = "start Copy_" + to_string(i) + "_" + fileName;
		system(name.c_str());
	}
}
