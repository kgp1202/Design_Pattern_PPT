#include "ImgDisplay.h"

int main(){
	ImgDisplay a;
	a.setSource("./aa.img");
	Library* b = new bmpLibrary();
	a.print(b);
}

