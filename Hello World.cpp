//Written by: Artemis Solomon
//Welcome to C++: Hello World 
//Example 1

//Header File Library
#include <iostream>

//Function
int main()
{
  //std:: indicates we are using the Standard Library.
  //cout (see-out) is the Object
  // << is the insertion operator
  std::cout << "Hello World!";
  //This ends the Function
  return 0;
}
------------------------------------------------------------
//////////\\\\\\\\\\//////////\\\\\\\\\\//////////\\\\\\\\\\
------------------------------------------------------------

 //This is a very, very basic program. 
 //Below is several examples of how the code could be written alternatively
  
 //Example 2
  
  #include <iostream>
  
  using namespace std;

int main()
{
  cout << "Hello World!" << endl;
  return ;
}
------------------------------------------------------------
 //Example 3
  
  #include <iostream>
  #include <iomanip>
  
  int main ()
{
    std::cout << std::setw(10) << "Hello" "World!";
    return 0;
}
------------------------------------------------------------
  //Example 4
  
  #include <iostream>
  
  int main()
{
  std::cout << "Hello World!" << std::endl;
  return 0;
}
