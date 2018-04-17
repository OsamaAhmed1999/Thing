#include <iostream>
using namespace std;

class Thing
{
  public:
  Thing()
  {
    this->x = new int;
    *x = 0;
    this->y = 0;
    this->z = 0;
  }
  Thing(int xx , int y , int z)
  {
    this->x = new int;
    *x = xx;
    this->y = y;
    this->z = z;
  }
  Thing(Thing& clone)
  {
    this->x = new int;
    *x = *(clone.x);
    this->y = clone.y;
    this->z = clone.z;
  }
  void display()
  {
    cout << "(" << *x << ",";
    cout << this->y << ",";
    cout << this->z << ")";
  }
  void set(int xx , int y , int z)
  {
    this->x = new int;
    *x = xx;
    this->y = y;
    this->z = z;
  }
  int getx()
  {
    return *x;
  }
  int gety()
  {
    return this->y;
  }
  int getz()
  {
    return this->z;
  }
  friend ostream& operator << (ostream& output , Thing& object)
  {
    return output << "(" << object.getx() << "," << object.gety() << "," << object.getz() << ")";
  }

  private:
  int *x;
  int y;
  int z;
};
