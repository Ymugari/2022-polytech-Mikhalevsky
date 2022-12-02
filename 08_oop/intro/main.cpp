#include "Strings.h"

int main() 
{
  String a = "post sdal";
  
  String b = " post prinyal";
  String c = a + b;
  std::cout << c << '\n' << c.get_length() << std::endl;
  return 0;
}