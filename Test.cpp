
#include <iostream>
#include <string>
using namespace std;

class Souris
{
	public:
  string s =" Hi ";
	int esperance_vie= 36;
	int esperance_vie1= 4*(esperance_vie)/5;
}; // fin de la classe Souris

int main()
{
   Souris co;
   cout<< co.esperance_vie1;
}
