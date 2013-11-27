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
	int s1,s2;
	cout << "Введите размер массива 1 "  << " ===> ";
	while (input(s1));
	cout << "Введите размер массива 2 "  << " ===> ";
	while (input(s2));
	}
	while(_getch()!=27);
}
