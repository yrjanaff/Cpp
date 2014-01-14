#include <iostream>
#include <array>

using namespace std;

int main()
{
  int MAX = 10000000;
 
  int count = 0;
  int rnd = rand() % 2; //creates random number between 0 and 1
  int seq = 1;
  int vals[2];
  int size = 10;
  //array<int*, size> seqs = {1};
    int* seqs = new int[size];
    
    
  int prevRnd;
  while (count < MAX)
  {
      count++;
      vals[rnd] += 1;
      prevRnd = rnd;
      rnd = rand() % 2;

      if (rnd == prevRnd)
      {
          seq++;
      }
      else
      {
          while (true)
          {
              if(seq < size)
              {
                  seqs[seq]++;
                  seq = 1;
                  break;
              }
          
              else
              {
                  size_t newSize = size * 2;
                  int* newArr = new int[newSize];
              
                  memcpy(newArr, seqs, size * sizeof(int));
              
                  size = newSize;
                  delete [] seqs;
                  seqs = newArr;
              }
          }
      }
  }
  cout << "\nR E S U L T S:\n";
  cout << "Len.\tCount" << endl;
  for (int i = 1; i < size; i++)
  {
      if (seqs[i] != 0)
      {
          cout << i << "\t" << seqs[i] << endl;
      }
 }
}

