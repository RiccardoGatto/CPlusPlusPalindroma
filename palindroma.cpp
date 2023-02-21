#include <iostream>
#include <string>

using namespace std;

bool checkPalindroma(string parola)
{
    bool risultato = true;

    int k = parola.length() - 1;

    for (int i = 0; i < k; i++)
    {
        if (parola[i] == parola[k])
        {
            k--;
        }
        else
        {
            risultato = false;
            break;
        }
    }
    return risultato;
}

int main()
{
    string parola;
    cout << "Inserisci parola: ";
    cin >> parola;
    if (checkPalindroma(parola))
    {
        cout << "\nLa parola e' palindroma" << endl;
    }
    else
    {
        cout << "\nLa parola non e' palindroma" << endl;
    }
}