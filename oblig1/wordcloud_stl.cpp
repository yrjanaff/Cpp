#include <iostream>
#include <map>
#include <algorithm>
#include <cstring>
#include "./stop.h"

using namespace std;

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
	  it = wrdcnt.find(wrd);
	  if(it == wrdcnt.end())
	    wrdcnt.insert(pair<string,int>(wrd,1)); //Setter inn ordet for første gang

	  else 
	    it->second++;
	}
    }
}

void write(int wrdnum, map<string, int> &wrdcnt)
{
  map<string,int>::iterator it;
  for (int i = 1; i <= wrdnum; i++) {
    if (wrdcnt.empty())
      break;
    // Go through the map and find the max item.
    int max_value = 0;
    string max_word = "";
    for (it=wrdcnt.begin(); it !=wrdcnt.end(); ++it) {
      if (it->second > max_value) {
        max_value = it->second;
        max_word = it->first;
      }    
    }
    // Erase this entry and print.
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
