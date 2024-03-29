#include <iostream>
#include <algorithm>
#include <cstring>
#include "stop.h"

using namespace std;

int wrdcnt_length = 10000;
string * wrds = new string[wrdcnt_length];
int * cnt = new int[wrdcnt_length];
int next_slot = 0; //neste ledige plass i arrayet

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

//Metode for å søke gjennom arrayet for et bestemt ord. Returnerer posisjonen
int find_word(string word)
{
  for (int i = 0; i <= next_slot; i++)
    {
      if(wrds[i] == word)
	return i;
    }
  return -1;
}

//Leser inn ord for ord med cin. Etter diverse sjekker legges ordet inn i arrayet wrds, mens antall forekomster blir lagt i samme posisjon i arrayet cnt  
void read_and_store()
{
    string  word;
  int i;                                                                                                                                                                  
  while(cin >> word)
    {
      transform(word.begin(), word.end(), word.begin(), ::tolower);
      word = remove_stopchars(word);

      if(!find_stopwrd(word))
        {
	  //sjekke om ordet allerede ligger i arrayet. Hvis det ikke er tilfelle, må ordet legges inn (sjekk om det er plass). Hvis ordet allerede ligger der, inkrementer cnt
	  i = find_word(word);
	  if(i >= 0)
	    cnt[i]++;
	  
	  else //ordet finnes ikke i arrayet, må legges inn
	    {
	      wrds[next_slot] = word;
	      cnt[next_slot] = 1;
	      next_slot++;
	    }
	}
    }
}

//Søker gjennom cnt for å finne de wrdnum største verdiene. Skriver ut en og en. 
void write(int wrdnum)
{
  for(int j = 0; j < wrdnum; j++)
    { 
      int max_pos = 0;
      for(int i = 1; i < wrdcnt_length; i++)
	{
	  if(cnt[i] > cnt[max_pos])
	    {
	      max_pos = i; 
	    }
	}
      cout << wrds[max_pos] << " : " << cnt[max_pos] << endl;
      cnt[max_pos] = 0; //setter posisjonen til den høyeste verdien til 0;
    }
}

int main(int argc, char *argv[])
{
  read_and_store();
  write(atoi(argv[1]));

  delete[] wrds;
  delete[] cnt;
}
