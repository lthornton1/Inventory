#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;

/*
The constructor requires all the information about the
product at the start, ie its name price and quantity
*/
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/*
The sell function will decrement the ammount of the product
that is left until none are left and then at that point it will
tell the user that there is no more of that product
*/
void Inventory::sell()
{
  if(m_in_stock == 0)
    std::cout<<"Sorry, that item is out of stock\n";
  else
    m_in_stock--;
}

/*
This overloads the << operator to allow it to take a Inventory
object as a valid parameter, returning the name and cost of the item
*/
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}
