#include <iostream>
using namespace std;

int main() {
  const double length = 7.2;
  const double width = 1.3;
  const double perimeter = 2 * (length + width);
  const double area = length * width;
  
  cout << "Rectangle Properties:" << endl;
  cout << "Length = " << length << endl;
  cout << "Width = " << width << endl;
  cout << "Area = " << area << endl;
  cout << "Perimeter = " << perimeter << endl;

  return 0;


}