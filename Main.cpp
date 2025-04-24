/*
    Names: Lucy Dunn and Baylee Stone
    Compiling Instructions: 
    Dependencies: https://www.asciiart.eu/text-to-ascii-art
    Output:
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

    title(); 
    cin >> elements; 
    arr = new int[elements]; 
    cout << "Please enter in your elements below" << endl; 
    for(int i =0; i<elements;i++)
    {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }
    cout << "\nFrom now on when asked if you are ready to continue please enter 1 to proceed!";
    cout << "\nLets look at the decrease in a visual manner!";
    cout << "\nTake note of the array decreasing by one each time!";
    max= RecursiveMax(arr, elements);
    cout << "\nThe final max of the array " ;
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

int RecursiveMax(int arr[], int elements)
{
    int max = 0; 
    int cont; 

    cout << "\n\nAre you ready to continue?";
    cin >> cont;
    if(cont == 1)
    {
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
      if(elements == 1)
      {
          cout << "\n\nn = 1"; 
          cout << "\nThis means we return s[0] and start conquering!";
          cout << "\ns[0] = " << arr[0] << endl; 
          cout << "\nWe will now look at the conquer phase!";
          cout << "\nAgain take note of the increase each time in the array!";
          cout << "\n\nAre you ready to continue?";
          cin >> cont;
          if(cont == 1)
          {
            return arr[0];
          }
      }
      else 
      {
          
          max = RecursiveMax(arr, elements-1);
          cout << "\nThe current max is " << max << endl;

          if(max>arr[elements-1])
          {
              cout << "\nSince the max (" << max << ") is less than the element " << arr[elements-1] << endl;
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
              cout << "\n\nAre you ready to continue?";
              cin >> cont;
              if(cont ==1 )
              {
                return max;
              }  
          }
          else 
          {
              cout << "\nSince the max (" << max << ") is not less than the element " << arr[elements-1] << endl;
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
              cout << "\n\nAre you ready to continue?";
              cin >> cont;
              if(cont ==1 )
              {
                return arr[elements-1];
              }
          }
      }
    }  
    return max;
}

void title()
{ 
  cout<<"\n\n   ____                          _                                           " ;
  cout<<"  |  _ \\ ___  ___ _   _ _ __ ___(_)_   _____                                " << endl;
  cout<<"  | |_) / _ \\/ __| | | | '__/ __| \\ \\ / / _ \\                               " << endl;
  cout<<"  |  _ <  __/ (__| |_| | |  \\__ \\ |\\ V /  __/                               " << endl;
  cout<<"  |_|_\\_\\___|\\___|\\__,_|_|  |___/_| \\_/ \\___|_              ___             "<<endl;
  cout<<"  |  _ \\  ___  ___ _ __ ___  __ _ ___  ___  | |__  _   _   / _ \\ _ __   ___ "<<endl;
  cout<<"  | | | |/ _ \\/ __| '__/ _ \\/ _` / __|/ _ \\ | '_ \\| | | | | | | | '_ \\ / _ \\ ";
   cout<<"  | |_| |  __/ (__| | |  __/ (_| \\__ \\  __/ | |_) | |_| | | |_| | | | |  __/" << endl;
    cout<<"  |____/ \\___|\\___|_|  \\___|\\__,_|___/\\___| |_.__/ \\__, |  \\___/|_| |_|\\___|" << endl;
    cout<<"   __ _ _ __   __| |  / ___|___  _ __   __ _ _   _|___/ _ __               " << endl;
    cout<<"  / _` | '_ \\ / _` | | |   / _ \\| '_ \\ / _` | | | |/ _ \\ '__|              " << endl;
    cout<<" | (_| | | | | (_| | | |__| (_) | | | | (_| | |_| |  __/ |                 " << endl;
    cout<<"  \\__,_|_| |_|\\__,_|  \\____\\___/|_| |_|\\__, |\\__,_|\\___|_|                 " << endl;
    cout<<"                                          |_|              "      << endl;          
  cout << "\nDuring this program you will see the workings of a decrease and conquer recursive algorithm!\n";
  cout << "As we go along, please press enter to see each step!\n"; 
  cout << "To start please enter in the size of your array: ";
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