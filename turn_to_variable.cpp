 
// we can get user input, and then turn that input to variable using
// stringstream for further processing

 #include <iostream>
 #include <string>
 #include <sstream>

 int main ()
 {
   std::string stringLength;
   float inches = 0;
   float yardage = 0;

   std::cout << "Enter number of inches: ";
   std::getline (std::cin,stringLength);
   std::stringstream(stringLength) >> inches;
   std::cout<<"You entered "<<inches<<"\n";
   yardage = inches/36;
   std::cout << "Yardage is " << yardage;
   return 0;
 }

 // another example

 #include <iostream>
 #include <string>
 #include <sstream>

 int main ()
 {
   std::string stringLength, stringWidth;
   float length = 0;
   float width = 0;
   float area = 0;

   std::cout << "Enter the length of the room: ";
   //get the length as a string
   std::getline (std::cin,stringLength);
   //convert to a float
   std::stringstream(stringLength) >> length;
   //get the width as a string
   std::cout << "Enter width: ";
   std::getline (std::cin,stringWidth);
   //convert to a float
   std::stringstream(stringWidth) >> width;
   area = length * width;
   std::cout << "\nThe area of the room is: " << area << std::endl;
   return 0;
 }