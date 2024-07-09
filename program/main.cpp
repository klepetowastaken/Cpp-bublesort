#include <iostream>
#include <string> // Correctly included here

class ClassaXD
{
public:
    void SetName(std::string x) // Prefix string with std::
    {
        name = x;
    }
    std::string GetName()
    {
        return name;
    }

private:
    std::string name; // Prefix string with std::
};
void PrintArray(int Array[], int size);

int main()
{
    /*
    int Array[5] = {1, 2, 3, 4, 5};
    int Ja[3] = {10, 20, 30};

    int size = sizeof(Array) / sizeof(Array[0]);

    PrintArray(Array, size);
    */

    int idk[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int x = 0; x < 5; x++)
    {
        sum += idk[x];
        std::cout << sum << std::endl;
    }

    int vek;
    int money;
    int pokus = 10;
    int PocetLidi = 0;
    int Age;
    int TotalAge = 0;

    // std::cin >> Age;

    /*
   while (Age != -1)
     {
         TotalAge = TotalAge + Age;
         std::cin >> Age;
         PocetLidi++;
     }

     if (TotalAge > 200)
     {
         std::cout << "Vsem lidem dohromady je nad 200 let" << std::endl;
     }
     else if (TotalAge > 100)
     {
         std::cout << "Vsem lidem dohromady je nad 100 ale mensi ney 200 let" << std::endl;
     }
     else
     {
         std::cout << "Vsem lidem dohromady je mene nez 100 let" << std::endl;
     }
     std::cout << "Prumerny vek je: " << TotalAge / PocetLidi << std::endl;
     std::cout << "Celkovy vek je: " << TotalAge << std::endl;
     std::cout << "Pocet lidi je: " << PocetLidi << std::endl;
    */
}
ClassaXD bo;
// bo.name = "Super jmeno XD"; This line will cause a compilation error because 'name' is private
// bo.SetName("Super jmeno XD");           // Correct way to set name using the public SetName method
// std::cout << bo.GetName() << std::endl; // Prefix string with std::
// std::cout << bo.name; This line will also cause a compilation error for the same reason

void PrintArray(int Array[], int size)
{
    for (int x = 0; x < size; x++)
    {
        std::cout << Array[x] << std::endl;
    }
}