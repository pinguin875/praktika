#include <iostream.h>
#include <assert.h>
#include "array2.h"
#include <fstream>

int main()
{
  do
	{
	  SetConsoleOutputCP(1251);
	  cout << "\n\tВариант № 6"<<endl;
	cout << "      b/a+21,    если a > b"<<endl;
	cout <<  "X =   -5,     если a = b"<<endl;
	cout << "     3*a/b+1,    если a < b"<<endl<<endl;
	}
	while(_getch()!=27);
}
