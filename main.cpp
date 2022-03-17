#include <iostream>
using namespace std;

void PrintEven (int Numbers);
void PrintOdd (int Numbers);
void Choice(string EoO,int Numbers);

int main()
{
  string name;
  int LoopAmt;
  int i = 0;
  string EvenOrOdd;
  
  cout << "How many time would you like to loop? " <<endl;
  cin >> LoopAmt;

  cout << "Would you like to print even or odd? \nType 'e' or 'o'. " << endl;
  cin >> EvenOrOdd;

  Choice(EvenOrOdd, LoopAmt);

  return 0;
}

void PrintEven (int Numbers)
{
  int i = 0;
  while (i < Numbers)
  {
    if (i % 2 == 0 )
    {
      cout << i << endl;
    }
    i++;
  }
}

void PrintOdd (int Numbers)
{
  int i = 0;
  while (i < Numbers)
  {
    if (i % 2 != 0 )
    {
      cout << i << endl;
    }
    i++;
  }
}

void Choice(string EoO,int Numbers)
{
  if (EoO == "e" || EoO == "E")
  {
    PrintEven(Numbers);
  }
  else if (EoO == "o" || EoO == "O")
  {
    PrintOdd(Numbers);
  }
  else
  {
    cout << "Your choice was incorrect" << endl;
    cin >> EoO;
  }
}