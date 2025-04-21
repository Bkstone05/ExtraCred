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
    int elements; 
    int* arr;

    title(); 
    cin >> elements; 
    arr = new int[elements]; 
    

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