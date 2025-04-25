/*
    Names: Lucy Dunn and Baylee Stone
    Compiling Instructions: g++ Main.cpp then enter and then a enter to run 
    Dependencies: https://www.asciiart.eu/text-to-ascii-art
    Output: Static and interactive 
    located: console
*/

#include <iostream>
using namespace std;

void title();
int RecursiveMax(int[], int);

int main()
{
    int elements, max; 
    int* arr;
    char cont;

    title(); 

    do //allows them to enter in array again if it is incorrect 
    {
      cout << "To start please enter in the size of your array: ";
    cin >> elements; 
    arr = new int[elements]; 
    cout << "Please enter in your elements below" << endl << endl; 
    for(int i =0; i<elements;i++)
    {
        cout << "\tElement " << i << ": ";
        cin >> arr[i];
    }
  
    //printing array
    cout << "\nYour array is S[";
    for(int i=0; i<elements; i++)
    {
      if(i != elements-1)
      {
        cout << arr[i] << ","; 
      }
      else
      {
        cout << arr[i];
      }
    }
    cout << "]";

    cout << "\nIf the array above is correct please enter in y for yes and n for no.\n" ; 
    cin >> cont;
    }while(cont != 'y' && cont != 'Y');

    cout << "\nFrom now on when asked if you are ready to continue please enter y for yes to proceed!";
    cout << "\n\nLets look at the decrease in a visual manner!" << endl;
    cout << "Take note of the array decreasing by one each time!" << endl;
    cout << "\nAre you ready to start? ";
    cin >> cont;
    while(cont != 'y' && cont != 'Y')
    {
      cout << "Please enter in y to continue "; 
      cin >> cont; 
    }
    max= RecursiveMax(arr, elements); //call algorithm 
    //final output of the array and max
    cout << "\n\nThe final max of the array " ;
    cout << "\nS[";
    for(int i=0; i<elements; i++)
    {
      if(i != elements-1)
      {
        cout << arr[i] << ","; 
      }
      else
      {
        cout << arr[i];
      }
    }
    cout << "] is " << max;
}


/*
Title: recursiveMax
Returns: int (Max of the array)
Input: Array and number of elements
Purpose: Find and return the max of an array 
*/
int RecursiveMax(int arr[], int elements)
{
    int max = 0; 
    char cont; 
    //prints array each time
      cout << "\nS[";
      for(int i=0; i<elements; i++)
      {
        if(i != elements-1)
        {
          cout << arr[i] << ","; 
        }
        else
        {
          cout << arr[i];
        }
      }
      cout << "]";
      // end of the decrease phase 
      if(elements == 1)
      {
          cout << "\n\nn = 1"; 
          cout << "\nThis means we return s[0] and start conquering!";
          cout << "\ns[0] = " << arr[0] << endl; 
          cout << "\nWe will now look at the conquer phase!";
          cout << "\nAgain take note of the increase each time in the array!";
          cout << "\n\nAre you ready to continue? ";
          cin >> cont;
          while(cont != 'y' && cont != 'Y')
          {
            cout << "\nPlease enter in y to proceed: ";
            cin >> cont;
          }
            return arr[0];
      }
      else 
      {
          //recursive call
          max = RecursiveMax(arr, elements-1);
          cout << "\nThe current max is " << max << endl;

          if(max>arr[elements-1]) //if max needs to stay the same
          {
              cout << "\nSince the max (" << max << ") is not less than the element " << arr[elements-1] << endl;
              cout << "We will be returning the max!";
              cout << "\nS[";
              for(int i=0; i<elements; i++)
              {
                if(i != elements-1)
                {
                  cout << arr[i] << ","; 
                }
                else
                {
                  cout << arr[i];
                }
              }
              cout << "]";
                return max;
          }
          else //max needs to be updated 
          {
              cout << "\nSince the max (" << max << ") is less than the element " << arr[elements-1] << endl;
              cout << "We will be returning the element!";
              cout << "\nS[";
              for(int i=0; i<elements; i++)
              {
                if(i != elements-1)
                {
                  cout << arr[i] << ","; 
                }
                else
                {
                  cout << arr[i];
                }
              }
              cout << "]";
              
                return arr[elements-1];
            
          }
      } 
    return max;
}

//prints out beginning output
void title()
{ 
  cout<<"\n\n   ____                          _                                           " << endl ;
  cout<<"  |  _ \\ ___  ___ _   _ _ __ ___(_)_   _____                                " << endl;
  cout<<"  | |_) / _ \\/ __| | | | '__/ __| \\ \\ / / _ \\                               " << endl;
  cout<<"  |  _ <  __/ (__| |_| | |  \\__ \\ |\\ V /  __/                               " << endl;
  cout<<"  |_|_\\_\\___|\\___|\\__,_|_|  |___/_| \\_/ \\___|_              ___             "<<endl;
  cout<<"  |  _ \\  ___  ___ _ __ ___  __ _ ___  ___  | |__  _   _   / _ \\ _ __   ___ "<<endl;
  cout<<"  | | | |/ _ \\/ __| '__/ _ \\/ _` / __|/ _ \\ | '_ \\| | | | | | | | '_ \\ / _ \\ " << endl;
   cout<<"  | |_| |  __/ (__| | |  __/ (_| \\__ \\  __/ | |_) | |_| | | |_| | | | |  __/" << endl;
    cout<<"  |____/ \\___|\\___|_|  \\___|\\__,_|___/\\___| |_.__/ \\__, |  \\___/|_| |_|\\___|" << endl;
    cout<<"   __ _ _ __   __| |  / ___|___  _ __   __ _ _   _|___/ _ __               " << endl;
    cout<<"  / _` | '_ \\ / _` | | |   / _ \\| '_ \\ / _` | | | |/ _ \\ '__|              " << endl;
    cout<<" | (_| | | | | (_| | | |__| (_) | | | | (_| | |_| |  __/ |                 " << endl;
    cout<<"  \\__,_|_| |_|\\__,_|  \\____\\___/|_| |_|\\__, |\\__,_|\\___|_|                 " << endl;
    cout<<"                                          |_|              "      << endl;          
  cout << "\nDuring this program you will see the workings of a decrease by one and conquer recursive algorithm!\n";
  cout << "As we go along, please press enter to see each step!\n\n"; 
}



/* This is a copy of our algorithm before I added in the extras for output 
int RecursiveMax(int arr[], int elements)
{
    int max; 
    if(elements == 1)
    {
        return arr[0];
    }
    else 
    {
        max = RecursiveMax(arr, elements-1);

        if(max>arr[elements-1])
        {
            return max;
        }
        else 
        {
            return arr[elements-1];
        }
    }
}
*/