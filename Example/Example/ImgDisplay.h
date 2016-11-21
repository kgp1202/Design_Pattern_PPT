#include "jpgLibrary.h"
#include <iostream>

using namespace std;

class ImgDisplay {
private:
	string source;

public:
	void setSource(string src) {
		source = src;
	}
	void print(Library* lib) {
		jpgLibrary* temp = dynamic_cast<jpgLibrary*>(lib);
		if (temp != NULL) {
			//jpgLibrary�� ���
			temp->printJPG(source);
		}
		bmpLibrary* temp2 = dynamic_cast<bmpLibrary*>(lib);
		if (temp2 != NULL) {
			//bmpLibrary�� ���
			temp2->printBMP(source);
		}
	}
};