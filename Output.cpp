#include "outPut.h"

void title()
{ 
  cout << " ___\n";
  cout << "| . \\ ___  ___  _ _  _ _  ___<_> _ _  ___              \n";
  cout << "|   // ._>/ | '| | || '_><_-<| || | |/ ._>       \n"      ;
  cout << "|_\\_\\___.\\_|_.`___||_|  /__/|_||__/ \\___.             " << endl;                                                    
  cout << " ___                                                 _ \n";
  cout << "| . \\ ___  ___  _ _  ___  ___  ___ ___   ___ ._ _  _| | \n";
  cout << "| | |/ ._>/ | '| '_>/ ._><_> |<_-</ ._> <_> || ' |/ . | \n";
  cout << "|___/\\___.\\_|_.|_|  \\___.<___|/__/\\___. <___||_|_|\\___| " << endl ;                                                        
  cout << "  ___                                _             \n"    ; 
  cout << " |  _> ___ ._ _  ___  _ _  ___  _ _ | |                 \n";
  cout << " | <__/ . \\| ' |/ . || | |/ ._>| '_>|_/                 \n";
  cout << " `___/\\___/|_|_|\\_  |`___|\\___.|_|  <_>                 \n";
  cout << "                  |_|                                   \n";
  cout << "\nDuring this program you will see the workings of a decrease and conquer recursive algorithm!\n";
  cout << "As we go along, please press enter to see each step!\n"; 
  cout << "To start please enter in the size of your array: ";
}

void decrease(int arr[], int elements)
{
  int n = elements; 
  int cont;
  cout << "\n\nWe are now going to demonstrate the decrease phase of the algorithm!\n";
  cout << "For each step look at the output and enter 1 when you are ready to continue!\n";
  cout << "Are you ready to start:";
  cin >> cont;

  while(cont ==1 && n != 1)
  {
    cout << "\nS[";
    for(int i=0; i<n; i++)
    {
      if(i != n-1)
      {
        cout << arr[i] << ","; 
      }
      else
      {
        cout << arr[i];
      }
    }
    cout << "]";
    cout << endl << "n = " << n; 
    cout << "\nCall Function and Send Array and n-1 (" << n-1 << ")"; 
    cout << "\nContinue? ";
    cin >> cont; 
    --n; 
  }
    cout << "\nn = 1"; 
    cout << "\nThis means we return s[0] and start conquering!";
    cout << "\ns[0] = " << arr[0] << endl; 
    cout << "Max is equal to " << arr[0] << endl;
    return;
}
/*
void conquer(int arr[], int elements)
{
  
}
*/