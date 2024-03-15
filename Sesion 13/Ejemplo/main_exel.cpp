#include <iostream>
#include "libxl.h"

using namespace libxl;

class MyClass 
{
  public:
    int id;
    string name;
    double value;
};

int main() 
{
  Book* book = xlCreateBook();
  Sheet* sheet = book->addSheet("Sheet1");
  MyClass obj1 = { 1, "John", 10.5 };
  MyClass obj2 = { 2, "Mary", 8.2 };
  sheet->writeStr(1, 1, "ID");
  sheet->writeStr(1, 2, "Name");
  sheet->writeStr(1, 3, "Value");
  sheet->writeNum(2, 1, obj1.id);
  sheet->writeStr(2, 2, obj1.name.c_str());
  sheet->writeNum(2, 3, obj1.value);
  sheet->writeNum(3, 1, obj2.id);
  sheet->writeStr(3, 2, obj2.name.c_str());
  sheet->writeNum(3, 3, obj2.value);
  book->save("data.xls");
  book->release();
  return 0;
}
