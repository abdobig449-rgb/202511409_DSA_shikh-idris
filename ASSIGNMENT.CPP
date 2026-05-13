#include <iostream>
#include <string>
using namespace std;

int main()
{
    // =========================
    // Question 1: Linear Search
    // =========================

    int n;

    cout << "Enter number of family members: ";
    cin >> n;

    string names[n];
    int ages[n];

    // Input names and ages
    for(int i = 0; i < n; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        cin >> names[i];

        cout << "Enter age of " << names[i] << ": ";
        cin >> ages[i];
    }

    // Search
    string key;
    bool found = false;

    cout << "\nEnter name to search: ";
    cin >> key;

    for(int i = 0; i < n; i++)
    {
        if(names[i] == key)
        {
            cout << key << " was found and is aged "
                 << ages[i] << endl;

            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "Not found" << endl;
    }

    // =========================
    // Question 2: Bubble Sort Names
    // =========================

    string arrNames[] = {"Zuck","Shayd","Emely","Amjed","Esther","Manar","Anne"};
    int size1 = 7;

    // Bubble Sort
    for(int i = 0; i < size1 - 1; i++)
    {
        for(int j = 0; j < size1 - i - 1; j++)
        {
            if(arrNames[j] > arrNames[j + 1])
            {
                string temp = arrNames[j];
                arrNames[j] = arrNames[j + 1];
                arrNames[j + 1] = temp;
            }
        }
    }

    cout << "\nNames in ascending order:\n";

    for(int i = 0; i < size1; i++)
    {
        cout << arrNames[i] << " ";
    }

    // =========================
    // Question 3: Bubble Sort Numbers
    // =========================

    int numbers[] = {109,99,23,45,23,2,5,1};
    int size2 = 8;

    // Bubble Sort
    for(int i = 0; i < size2 - 1; i++)
    {
        for(int j = 0; j < size2 - i - 1; j++)
        {
            if(numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "\n\nNumbers in ascending order:\n";

    for(int i = 0; i < size2; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
