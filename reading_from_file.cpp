#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void main ()
{
	 float number1=0;
	 float number2=0;
	 float sum=0;
	 ifstream file ("test.txt");
	 if (file.is_open())
	 {	  
		  while(file >> number1 >> number2)
		  {
			   sum = number1 + number2 + sum;
			     
		  }
		cout << sum << " " <<endl;
	 }
	 else
	 cout << "There was an error" << endl;
	 system("PAUSE");
}
