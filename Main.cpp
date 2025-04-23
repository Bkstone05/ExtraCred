/*
    Names: Lucy Dunn and Baylee Stone
    Compiling Instructions: 
    Dependencies: 
    Output:
    located: console
*/

#include "outPut.h"

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
    decrease(arr, elements);
    cout << "Ending the decrease phase!\n\n";
    max= RecursiveMax(arr, elements);
    cout << max;
   // conquer(arr, elements);


}

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