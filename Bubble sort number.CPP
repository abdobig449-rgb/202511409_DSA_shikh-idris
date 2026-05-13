السؤال 1 — Linear Search

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of family members: ";
    cin >> n;
    string names[n];
    int ages[n];
    for(int i = 0; i < n; i++)
    {
        cout << "Enter name: ";
        cin >> names[i];
        cout << "Enter age: ";
        cin >> ages[i];
    }
    string key;
    bool found = false;
    cout << "Enter name to search: ";
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
    if(found == false)
    {
        cout << "Not found";
    }
    return 0;
}

⸻

السؤال 2 — Bubble Sort للأسماء

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string names[] = {"Zuck","Shayd","Emely","Amjed","Esther","Manar","Anne"};
    int size = 7;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(names[j] > names[j + 1])
            {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
    cout << "Names in ascending order:\n";
    for(int i = 0; i < size; i++)
    {
        cout << names[i] << " ";
    }
    return 0;
}

⸻

السؤال 3 — Bubble Sort للأرقام

#include <iostream>
using namespace std;
int main()
{
    int numbers[] = {109,99,23,45,23,2,5,1};
    int size = 8;
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    cout << "Numbers in ascending order:\n";
    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}
