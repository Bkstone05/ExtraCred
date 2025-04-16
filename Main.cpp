/*
    Names: Lucy Dunn and Baylee Stone
    Compiling Instructions: 
    Dependencies: 
    Output;
    located: console
*/

int RecursiveMax(int[], int);

int main()
{

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
    }
}