#include <iostream>
#include <conio.h>

using namespace std;

void XHandler(int test)
{
	try{
		if(test == 0)
			throw test;
		if(test == 1)
			throw 'a';
		if(test == 2)
			throw 123.23;
	} catch(...){
		cout << "Caght One!\n";
	}
}

int main()
{
	cout << "Start\n";
	XHandler(0);
	XHandler(1);
	XHandler(2);
	cout << "End";

	getch();
	return 0;
}
