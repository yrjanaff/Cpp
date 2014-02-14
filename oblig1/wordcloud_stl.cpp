#include <iostream>
#include <map>
#include <algorithm>
#include <cstring>
#include "./stop.h"

using namespace std;

//Metode for å finne stoppord. Returnerer true hvis ordet er et stoppord, false hvis ikke
bool find_stopwrd(string word)
{
  size_t length = strlen(stopwords_c);
  string tmp = "";
  for(int i = 0; i <= length; i++)
    {
      if(stopwords_c[i] != ',')
	  tmp += stopwords_c[i];

      else
	{
	  if(tmp == word)
	    return true;

	  else tmp = "";
	}
    }
  return false;
}

//Metode for å finne og fjerne stopchars fra ord. Returnere det samme ordet, uten eventuelle stopchars på slutten.
string remove_stopchars(string word)
{
  size_t length = strlen(stopchars_c);
  string newstr = "";
  for(int i = 0; i < word.length(); i++)
    {
      for (int j = 0; j < length; j++)
	{
	  if (word[i] == stopchars_c[j])
	    return word.substr(0,i);
	}
    }
  return word;
}

//Leser inn ord for ord med cin. Etter diverse sjekker legges ordet inn i map som key, mens antall forekomster er value
void read_and_store(map<string, int> &wrdcnt)
{
  int i = 0;
  string  wrd;
  map<string,int>::iterator it; //iterator

  while(cin >> wrd)
    {
      transform(wrd.begin(), wrd.end(), wrd.begin(), ::tolower);
      wrd = remove_stopchars(wrd);
      
	if(!find_stopwrd(wrd))
	  {
	    it = wrdcnt.find(wrd);//sjekker om ordet finnes i mappet
	    if(it == wrdcnt.end())
	      wrdcnt.insert(pair<string,int>(wrd,1)); //Setter inn ordet for første gang
	    
	    else //ordet finnes allerede, inkrementerer antall forekomster
	      it->second++;
	  }
    }
}

//Søker gjennom mappet for å finne de wrdnum største verdiene. Skriver ut en og en.
void write(int wrdnum, map<string, int> &wrdcnt)
{
  map<string,int>::iterator it;
  for (int i = 1; i <= wrdnum; i++) 
    {
      if (wrdcnt.empty())
	break;
      // Går gjennom mappet og finner største value
      int max_value = 0;
      string max_word = "";
      for (it=wrdcnt.begin(); it !=wrdcnt.end(); ++it) 
	{
	  if (it->second > max_value) 
	    {
	      max_value = it->second;
	      max_word = it->first;
	    }    
	}
      // Sletter største value fra mappet, slik at vi ikke finner det igjen
      wrdcnt.erase(max_word);
      cout << max_word << " : " <<  max_value <<  endl;
    }
}


int main(int argc, char *argv[])
{
  map<string, int> wrdcnt;
  read_and_store(wrdcnt);
  write(atoi(argv[1]), wrdcnt);
}
