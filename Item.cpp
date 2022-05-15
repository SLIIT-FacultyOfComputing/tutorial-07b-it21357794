#include "Item.h"
#include <iostream>
using namespace std;

Item::Item() {
	itemCode = 0;
	unitPrice = 0;
	discount = 0;
}
Item::Item(int i_code, float u_price) {
	itemCode = i_code;
	unitPrice = u_price;
}
Item::~Item() {
	cout << "\nDISTRUCTOR IN PROGRESS" << endl;
}


void Item::setDiscount(float pdiscount) {
  discount = pdiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - unitPrice * discount/100;
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}
