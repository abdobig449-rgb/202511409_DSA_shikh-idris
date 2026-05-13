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
