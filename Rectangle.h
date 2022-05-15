// Rectangle.h

class Rectangle {
   private:
      int length;
      int width;
   public:
      Rectangle(); // Default Constructor
      Rectangle(int l, int w); // Overloaded Constructor
     ~Rectangle(); // Destructor
      void setlength(int l);
	    void setwidth(int w);
      int calcArea();
      void display();
};
