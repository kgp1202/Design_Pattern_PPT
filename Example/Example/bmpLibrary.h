#include <stdio.h>
#include <string>
#include "Library.h"
using namespace std;

class bmpLibrary : public Library {
public:
	void printBMP(string route) {
		printf("this picture is BMP\nSoucre is %s\n", route.c_str());
	}
};