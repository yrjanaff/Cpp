#include <iostream>
#include <sstream>

using namespace std;

long long string_to_ulong(string s)
{  
  long long* a = (long long*) s.c_str(); //Gjør om stringen til en Cstring og konverterer denne til et 64-bit tall
  return *a;
}

string ulong_to_string(long long nr)
{
  return string( (char*) &nr ); //bruker string sin konstruktør til å opprette en string fra Cstring
}

int main()
{
  long long longstr = string_to_ulong("I love C++"); //Sender stringen til konvertering og tar i mot resultatet
  string svar = ulong_to_string(longstr); //Sender det konverterte tallet til å bli konvertert tilbake til string
  svar.resize(8); 
  cout << svar << endl;
}
