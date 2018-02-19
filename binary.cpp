
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	  //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 ofstream labfile{"abc.bin", ios::binary};
 labfile.write(reinterpret_cast<char*>(&a), sizeof(a));
      labfile.write(reinterpret_cast<char*>(&b), sizeof(b));
      labfile.write(reinterpret_cast<char*>(&c), sizeof(c));
    
cout << endl;
  
 
	return 0;
}

