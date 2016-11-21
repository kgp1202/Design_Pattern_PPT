#include "bmpLibrary.h"
using namespace std;

class jpgLibrary : public Library {
public:
	void printJPG(string route) {
		printf("this picture is jpgLibrary\nSource is %s\n", route.c_str());
	}
};