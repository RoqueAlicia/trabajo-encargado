#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
 char car, Comienzo = 'Z';
 for (Comienzo = 'Z'; Comienzo >= 'A'; Comienzo --)
 {
     for ( car = Comienzo; car >= 'A'; car--)
     cout <<car << ' ';
     cout << endl;
 }
  system("PAUSE");
  return EXIT_SUCCESS;
}