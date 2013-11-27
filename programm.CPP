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
	cout << "Размер первого массива равен "
		  << integers1.getSize() << endl;

	cout << "Размер второго массива равен "
		  << integers2.getSize() <<endl;
	if(integers1.getSize()>10||integers2.getSize()>10)
		{
			integers1.arrayrandom();
			integers2.arrayrandom();
		}
	else
	{
			cout << "Введите " << integers1.getSize()
				<<" целочисленных значений для первого массивa:" << endl;
			cin >>integers1;
			
			
	}
	while(_getch()!=27);
}
