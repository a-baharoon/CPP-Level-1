#include <iostream>
using namespace std;

struct stAddress
{
  string street;
  string pobox;
  
};

struct stOwner {

  string fullName;
  string Phone;
  stAddress Address;
};

struct Car
{
  string Brand;
  string Model;
  int Year;
  stOwner Owner;

};

int main() {

  Car MyCar1, MyCar2;

  
  MyCar1.Brand = "BMW";
  MyCar1.Model = "X5";
  MyCar1.Year = 2000;

  cout << MyCar1.Brand << " " << MyCar1.Model << " " << MyCar1.Year << endl;

  MyCar2.Brand = "Ford";
  MyCar2.Model = "Mustang";
  MyCar2.Year = 2022;

  MyCar1.Owner.Phone = "0504455908";
  MyCar1.Owner.Address.street = "Beverly Hills";

  cout << MyCar1.Owner.Address.street << endl;
  

  return 0;

}
