#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;


/*
The inventoru class manages our product and contains
the initial ammount of the product, its name and its price
*/
class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int);
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif
