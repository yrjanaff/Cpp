#include <iostream>
#include <sstream>

using namespace std;

long long string_to_ulong(string s)
{  
  long long* a = (long long*) s.c_str();
  return *a;
}

string ulong_to_string(long long nr)
{
  return string( (char*) &nr );
}

int main()
{
  long long longstr = string_to_ulong("I love C++");
  string svar = ulong_to_string(longstr);
  svar.resize(8); 
  cout << svar << endl;
}
