#include <cerrno>
#include <iostream> 
#include "../include/name.hpp"

using namespace std;

int main()
{

cout << "Hello World!" << endl;
string name;
name = ask_name();
cout << "Hi, " << name << "!" << endl; 

return 0;

}
