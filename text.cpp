
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	  //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 ofstream labfile{"abc.txt"};
 
   labfile <<a<<" "<<b<<" "<<c;

cout << endl;
  
 
	return 0;
}

