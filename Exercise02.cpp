#include "Rectangle.h"
#include "Circle.h"
#include <iostream>
using namespace std;

int main() {
  // ========= DO NOT CHANGE THE INPUT CODE BELOW ==================
   int length, width, radius;
   cout << "Enter length of Rectangle : ";
   cin >> length;
   cout << "Enter width of Rectangle : ";
   cin >> width;
   cout << "Enter radius of Circle : ";
   cin >> radius;
   // ======== DO NOT CHANGE THE CODE GIVEN ABOVE ====================
 Rectangle * rec1;
    rec1 = new Rectangle;
    rec1->setlength(length);
	  rec1->setwidth(width);
	  rec1->display();
	  delete rec1;
 
 Circle * cir1;
    cir1 = new Circle;
    cir1->setradius(radius);
	  cir1->display();
	  delete cir1;
   // ============ DO NOT CHANGE THE CODE BELOW ===================
   cout << "End of Program" << endl;
  
}
