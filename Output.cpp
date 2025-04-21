#include "outPut.h"

void title()
{ 
  cout <<  "___";
  cout << " | . \\ ___  ___  _ _  _ _  ___<_> _ _  ___              ";
  cout << " |   // ._>/ | '| | || '_><_-<| || | |/ ._>       "      ;
  cout << " |_\\_\\___.\\_|_.`___||_|  /__/|_||__/ \\___.             " << endl;                                                    
  cout << "    ___                                                 _ ";
  cout << "  | . \\ ___  ___  _ _  ___  ___  ___ ___   ___ ._ _  _| | ";
  cout << "  | | |/ ._>/ | '| '_>/ ._><_> |<_-</ ._> <_> || ' |/ . | ";
  cout << " |___/\\___.\\_|_.|_|  \\___.<___|/__/\\___. <___||_|_|\\___| " << endl ;                                                        
  cout << "    ___                                _             "    ; 
  cout << "  |  _> ___ ._ _  ___  _ _  ___  _ _ | |                 ";
  cout << "  | <__/ . \\| ' |/ . || | |/ ._>| '_>|_/                 ";
  cout << "  `___/\\___/|_|_|\\_  |`___|\\___.|_|  <_>                 ";
  cout << "                   |_|                                   ";
  cout << "\nDuring this program you will see the workings of a decrease and conquer recursive algorithm!\n";
  cout << "As we go along, please press enter to see each step!\n"; 
  cout << "To start please enter in the size of your array: ";
}

void decrease(int arr[], int elements)
{
  int n = elements; 
  int cont;
  cout << "We are now going to demonstrate the decrease phase of the algorithm!\n";
  cout << "For each step look at the output and enter 1 when you are ready to continue!\n";
  cout << "Are you ready to start:";
  cin >> cont;
// Might need to put this in a loop? possible a do-while or while
  if(cont ==1 && n != 1)
  {
    cout << "\n\nS[";
    for(int i=0; i<elements; i++)
    {
      cout << arr[i] << ","; 
    }
    cout << "]";
    cout << endl << "n = " << n; 
    cout << "Call Function and Send Array and n-1 ( " << n-1 << " )"; 
    cout << "Continue? ";
    cin >> cont; 
    if(cont ==1 && n !=1)
    {
      --n; 
      cout << "\nS[";
      for(int i=0; i<n; i++)
      {
        cout << arr[i] << ","; 
      }
      cout << "]";
      cout << endl << "n = " << n; 
      cout << "Call Function and Send Array and n-1 ( " << n-1 << " )"; 
      cout << "Continue? ";
      cin >> cont; 

    }
    else
    {
      cout << "n = 1"; 
      cout << "This means we return s[0] and start conquering!";
      cout << "s[0] = " << arr[0]; 
      return;
    }
  }
  else
  {
    cout << "n = 1"; 
    cout << "This means we return s[0] and start conquering!";
    cout << "s[0] = " << arr[0]; 
    return;
  }
}

void conquer(int arr[], int elements)
{
  
}
