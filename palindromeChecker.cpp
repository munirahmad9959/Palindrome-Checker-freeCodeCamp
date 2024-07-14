#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string check)
{
    string checked;
    for (char ch : check)
    {
        if (isalnum(ch))
        {
            checked += ch; // Convert to lower case to ignore case sensitivity
        }
    }

    // Manually reverse the checked string
    string reversed;
    for (int i = checked.length() - 1; i >= 0; i--)
    {
        reversed += checked[i];
    }

    return checked == reversed; // Compare original with reversed
}

int main()
{
    cout << "Enter the Word: ";
    string check;
    cin >> check;
    if (isPalindrome(check))
        cout << "The word is a palindrome.\n";
    else
    {
        cout << "It is not a palindrome.\n";
    }

    return 0;
}
