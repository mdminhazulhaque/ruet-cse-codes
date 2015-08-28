#include <iostream>
using namespace std;
const int INPUT_SIZE = 10;
void print(int *input)
{
    for ( int i = 0; i < INPUT_SIZE; i++ )
        cout << input[i] << " ";
    cout << endl;
}
int partition(int* input, int p, int r)
{
    int pivot = input[r];

    while ( p < r )
    {
        while ( input[p] < pivot )
            p++;

        while ( input[r] > pivot )
            r--;

        if ( input[p] == input[r] )
            p++;
        else if ( p < r )
        {
            int tmp = input[p];
            input[p] = input[r];
            input[r] = tmp;
        }
    }
    return r;
}
void quicksort(int* input, int p, int r)
{
    if ( p < r )
    {
        int j = partition(input, p, r);
        quicksort(input, p, j-1);
        quicksort(input, j+1, r);
    }
}
int main()
{
    int input[INPUT_SIZE] = {500, 700, 800, 100, 300, 200, 900, 400, 1000, 600};
    cout << "Input: ";
    print(input);
    quicksort(input, 0, 9);
    cout << "Output: ";
    print(input);
    return 0;
}
