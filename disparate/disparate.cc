#include <iomanip>
#include <iostream>

using namespace std;

int main ()
{
  {
    int32_t big =1e8;
    int32_t small = 1;
    int32_t sum = big + small; 

    cout << "int32_t:" << endl;
    cout << "  big   = " << big   << endl;
    cout << "  small = " << small << endl;
    cout << "  sum   = " << sum   << endl;
  }

  {
  
      float big =1e8;
      float small= 1;
      float sum = big + small;

    cout << "float:" << endl;
    cout << "  big   = " << fixed << setprecision(1) << big   << endl;
    cout << "  small = " << fixed << setprecision(1) << small << endl;
    cout << "  sum   = " << fixed << setprecision(1) << sum   << endl;
  }
}

