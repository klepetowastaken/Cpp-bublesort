#include <iostream>
void fillArrayWithRandomValues(int *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        arr[i] = std::rand() % 100; // Random values between 0 and 99
    }
}

void swap(int c1, int c2, int *pole)
{
    int mezicas = pole[c1];

    pole[c1] = pole[c2];
    pole[c2] = mezicas;
}
void bubblesort(int *myArray, int n)
{
    for (int p = 0; p < n - 1; p++)
    {

        for (int i = 0; i < n - 1; i++)
        {
            if (myArray[i] < myArray[i + 1])
            {

                swap(i, i + 1, myArray);
            }
        }
    }
}
void printArray(int *array, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << ", ";
    }
    std::cout << "\n";
}

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    const int n = 22;
    // Declare arrays
    int array1[n], array2[n], array3[n], array4[n], array5[n];

    // Function to fill array with random values

    // Fill the arrays with random values
    fillArrayWithRandomValues(array1, n);
    fillArrayWithRandomValues(array2, n);
    fillArrayWithRandomValues(array3, n);
    fillArrayWithRandomValues(array4, n);
    fillArrayWithRandomValues(array5, n);

    bubblesort(array1, n);
    bubblesort(array2, n);
    bubblesort(array3, n);
    bubblesort(array4, n);
    bubblesort(array5, n);

    printArray(array1, n);
    printArray(array2, n);
    printArray(array3, n);
    printArray(array4, n);
    printArray(array5, n);
}
